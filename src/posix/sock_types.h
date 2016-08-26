#include <arpa/inet.h>

#if defined(SOCK_HAS_IPV6)
    typedef struct sockaddr_in6 sockaddr_t;
#else
    typedef struct sockaddr_in sockaddr_t;
#endif

struct sock_udp {
    int fd;
    unsigned flags;
    unsigned family;
    sockaddr_t peer;
};
int sock_udp_fmt_endpoint(const sock_udp_ep_t *endpoint, char *addr_str, uint16_t *port);