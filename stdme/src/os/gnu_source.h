/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnu_source.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:53:46 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:38 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNU_SOURCE_H
# define GNU_SOURCE_H

# define _GNU_SOURCE

# ifdef PRINT_BACKTRACE 
#  include <dlfcn.h>
#  include <execinfo.h>
#  include <link.h>
#  include <stdio.h>
#  include <stdlib.h>
# endif
# ifdef BACKTRACE_DEEP
#  include <dlfcn.h>
#  include <execinfo.h>
#  include <link.h>
#  include <stdio.h>
#  include <stdlib.h>
# endif 

#endif /* GNU_SOURCE_H */
