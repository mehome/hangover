#ifndef HAVE_QEMU_WINTERNL_H
#define HAVE_QEMU_WINTERNL_H

#include "thunk/qemu_windef.h"

struct qemu_UNICODE_STRING
{
  USHORT Length;        /* bytes */
  USHORT MaximumLength; /* bytes */
  qemu_ptr  Buffer;
};

static inline void UNICODE_STRING_g2h(UNICODE_STRING *host, const struct qemu_UNICODE_STRING *guest)
{
    host->Length = guest->Length;
    host->MaximumLength = guest->MaximumLength;
    host->Buffer = (WCHAR *)(ULONG_PTR)guest->Buffer;
}

static inline void UNICODE_STRING_h2g(struct qemu_UNICODE_STRING *guest, const UNICODE_STRING *host)
{
    guest->Length = host->Length;
    guest->MaximumLength = host->MaximumLength;
    guest->Buffer = (ULONG_PTR)host->Buffer;
}

struct qemu_STRING
{
    USHORT Length;
    USHORT MaximumLength;
    qemu_ptr Buffer;
};

static inline void STRING_g2h(STRING *host, const struct qemu_STRING *guest)
{
    host->Length = guest->Length;
    host->MaximumLength = guest->MaximumLength;
    host->Buffer = (CHAR *)(ULONG_PTR)guest->Buffer;
}

static inline void STRING_h2g(struct qemu_STRING *guest, const STRING *host)
{
    guest->Length = host->Length;
    guest->MaximumLength = host->MaximumLength;
    guest->Buffer = (ULONG_PTR)host->Buffer;
}

struct qemu_OBJECT_NAME_INFORMATION
{
    struct qemu_UNICODE_STRING Name;
};

static inline void OBJECT_NAME_INFORMATION_g2h(OBJECT_NAME_INFORMATION *host, const struct qemu_OBJECT_NAME_INFORMATION *guest)
{
    UNICODE_STRING_g2h(&host->Name, &guest->Name);
}

static inline void OBJECT_NAME_INFORMATION_h2g(struct qemu_OBJECT_NAME_INFORMATION *guest, const OBJECT_NAME_INFORMATION *host)
{
    UNICODE_STRING_h2g(&guest->Name, &host->Name);
}

struct qemu_IO_STATUS_BLOCK
{
    union
    {
        NTSTATUS Status;
        qemu_ptr Pointer;
    } DUMMYUNIONNAME;

    qemu_ptr Information;
};

static inline void IO_STATUS_BLOCK_g2h(IO_STATUS_BLOCK *host, const struct qemu_IO_STATUS_BLOCK *guest)
{
    host->Pointer = (void *)(ULONG_PTR)guest->Pointer;
    host->Information = guest->Information;
}

static inline void IO_STATUS_BLOCK_h2g(struct qemu_IO_STATUS_BLOCK *guest, const IO_STATUS_BLOCK *host)
{
    guest->Pointer = (ULONG_PTR)host->Pointer;
    guest->Information = host->Information;
}

struct qemu_OBJECT_ATTRIBUTES
{
    ULONG Length;
    qemu_handle RootDirectory;
    qemu_ptr ObjectName;
    ULONG Attributes;
    qemu_ptr SecurityDescriptor;       /* type SECURITY_DESCRIPTOR */
    qemu_ptr SecurityQualityOfService; /* type SECURITY_QUALITY_OF_SERVICE */
};

static inline void OBJECT_ATTRIBUTES_g2h(OBJECT_ATTRIBUTES *host, const struct qemu_OBJECT_ATTRIBUTES *guest)
{
    host->Length = sizeof(*host);
    host->RootDirectory = HANDLE_g2h(guest->RootDirectory);
    host->ObjectName = (UNICODE_STRING *)(ULONG_PTR)guest->ObjectName;
    host->Attributes = guest->Attributes;
    host->SecurityDescriptor = (void *)(ULONG_PTR)guest->SecurityDescriptor;
    host->SecurityQualityOfService = (void *)(ULONG_PTR)guest->SecurityQualityOfService;
}

static inline void OBJECT_ATTRIBUTES_h2g(struct qemu_OBJECT_ATTRIBUTES *guest, const OBJECT_ATTRIBUTES *host)
{
    guest->RootDirectory = (ULONG_PTR)host->RootDirectory;
    guest->ObjectName = (ULONG_PTR)host->ObjectName;
    guest->Attributes = host->Attributes;
    guest->SecurityDescriptor = (ULONG_PTR)host->SecurityDescriptor;
    guest->SecurityQualityOfService = (ULONG_PTR)host->SecurityQualityOfService;
}

#endif
