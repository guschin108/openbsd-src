divert(-1)
#
# Copyright (c) 1998, 1999 Proofpoint, Inc. and its suppliers.
#	All rights reserved.
# Copyright (c) 1983 Eric P. Allman.  All rights reserved.
# Copyright (c) 1988, 1993
#	The Regents of the University of California.  All rights reserved.
#
# By using this file, you agree to the terms and conditions set
# forth in the LICENSE file which can be found at the top level of
# the sendmail distribution.
#
#
divert(0)
VERSIONID(`$Sendmail: unspecified-domain.m4,v 8.11 2013/11/22 20:51:10 ca Exp $')
errprint(`*** ERROR: You are trying to use the Berkeley sample configuration')
errprint(`	files outside of the Computer Science Division at Berkeley.')
errprint(`	The configuration (.mc) files must be customized to reference')
errprint(`	domain files appropriate for your environment.')
