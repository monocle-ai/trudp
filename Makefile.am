## Process this file with automake to produce Makefile.in

# Doxygen ---------------------------------------------------------------------

include aminclude.am

#DX_CLEANFILES =

if DX_COND_man

# You'd probably want to post-process man pages and installed the patched
# versions.
man3_MANS = @DX_DOCDIR@/man/man3/*.3
$(man3_MANS): doxygen-doc
DX_CLEANFILES = -rf @DX_DOCDIR@/*

endif

if DX_COND_html

trudpdatarootdocdir = $(datarootdir)/doc/@PACKAGE@
doxydocdir = $(datarootdir)/doc/@PACKAGE@/html
doxydoc_DATA = $(wildcard docs/html/*.*)

doxydoc_searchdir = $(datarootdir)/doc/@PACKAGE@/html/search
doxydoc_search_DATA = $(wildcard docs/html/search/*.*)

DX_CLEANFILES = -rf @DX_DOCDIR@

endif

# Remove doc directory on uninstall
#uninstall-local:
#	-rm -r $(datarootdir)/doc/@PACKAGE@/html
#	-rm -r $(datarootdir)/doc/@PACKAGE@

# -----------------------------------------------------------------------------

SUBDIRS = libs/teobase src po tests examples

trudpdocdir = ${prefix}/doc/@PACKAGE@
trudpdoc_DATA = \
	README\
	COPYING\
	AUTHORS\
	ChangeLog\
	INSTALL\
	NEWS

INTLTOOL_FILES = intltool-extract.in \
	intltool-merge.in \
	intltool-update.in

EXTRA_DIST = $(trudpdoc_DATA) \
	$(INTLTOOL_FILES)

DISTCLEANFILES = intltool-extract \
	intltool-merge \
	intltool-update \
	po/.intltool-merge-cache

# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(trudpdocdir)
	
test:	tests/trudp_tst
	tests/trudp_tst

#	libs/teobase/libs/teoccl/tests/teoccl_tst
#	libs/teobase/libs/teoccl/tests/teoccl_cpp_tst