/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex_keywords_array.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEX_KEYWORDS_ARRAY_H
# define LEX_KEYWORDS_ARRAY_H

# include "../../../types/type_lex_keywords.h"
# include "../../../headers/symbols.h"
# include "../../../headers/external_scanner_symbol_identifiers.h"
# include "../../../headers/field_identifiers.h"
# include "../../../headers/constants.h"
# include "../../../char_set/charset_inline.h"
# include "../lex_keywords_funcs.h"

void	lex_keywords_array_0(t_lex_keywords_array *v);
void	lex_keywords_array_1(t_lex_keywords_array *v);

#endif // LEX_KEYWORDS_ARRAY_H
