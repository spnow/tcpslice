/* "generated automatically" means DO NOT MAKE CHANGES TO config.h.in --
 * make them to acconfig.h and rerun autoheader */
@TOP@
/* If you have both fseeko and ftello, change both of these. */
#define	FSEEK	fseek
#define	FTELL	ftell

/* If there is an LBL-supplied header with additional prototypes
 * for your system, define this.
 */
#undef	HAVE_OS_PROTO_H

/* If you have <pcap-int.h> that goes with your libpcap, define this. */
#undef	HAVE_PCAP_INT_H

/* Secret configure stuff */
#undef	_HPUX_SOURCE

/* Long story short: aclocal.m4 depends on autoconf 2.13
 * implementation details wrt "const"; newer versions
 * have different implementation details so for now we
 * put "const" here.  This may cause duplicate definitions
 * in config.h but that should be OK since they're the same.
 */
#undef const
