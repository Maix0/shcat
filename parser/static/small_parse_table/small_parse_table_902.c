/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_902.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4510(t_small_parse_table_array *v)
{
	v->a[90200] = actions(3);
	v->a[90201] = 1;
	v->a[90202] = sym_comment;
	v->a[90203] = actions(3962);
	v->a[90204] = 1;
	v->a[90205] = sym__concat;
	v->a[90206] = actions(3728);
	v->a[90207] = 7;
	v->a[90208] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90209] = anon_sym_DOLLAR;
	v->a[90210] = anon_sym_DQUOTE;
	v->a[90211] = sym_string_content;
	v->a[90212] = anon_sym_DOLLAR_LBRACE;
	v->a[90213] = anon_sym_DOLLAR_LPAREN;
	v->a[90214] = anon_sym_BQUOTE;
	v->a[90215] = 4;
	v->a[90216] = actions(870);
	v->a[90217] = 1;
	v->a[90218] = sym_comment;
	v->a[90219] = actions(3966);
	small_parse_table_4511(v);
}

void	small_parse_table_4511(t_small_parse_table_array *v)
{
	v->a[90220] = 2;
	v->a[90221] = anon_sym_GT_GT;
	v->a[90222] = anon_sym_GT_PIPE;
	v->a[90223] = actions(3968);
	v->a[90224] = 2;
	v->a[90225] = anon_sym_LT_AMP_DASH;
	v->a[90226] = anon_sym_GT_AMP_DASH;
	v->a[90227] = actions(3964);
	v->a[90228] = 4;
	v->a[90229] = anon_sym_LT;
	v->a[90230] = anon_sym_GT;
	v->a[90231] = anon_sym_LT_AMP;
	v->a[90232] = anon_sym_GT_AMP;
	v->a[90233] = 6;
	v->a[90234] = actions(3);
	v->a[90235] = 1;
	v->a[90236] = sym_comment;
	v->a[90237] = actions(1194);
	v->a[90238] = 1;
	v->a[90239] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4512(v);
}

void	small_parse_table_4512(t_small_parse_table_array *v)
{
	v->a[90240] = actions(3970);
	v->a[90241] = 1;
	v->a[90242] = aux_sym_concatenation_token1;
	v->a[90243] = actions(3973);
	v->a[90244] = 1;
	v->a[90245] = sym__concat;
	v->a[90246] = state(1973);
	v->a[90247] = 1;
	v->a[90248] = aux_sym_concatenation_repeat1;
	v->a[90249] = actions(1189);
	v->a[90250] = 4;
	v->a[90251] = anon_sym_in;
	v->a[90252] = anon_sym_SEMI_SEMI;
	v->a[90253] = anon_sym_AMP;
	v->a[90254] = anon_sym_SEMI;
	v->a[90255] = 3;
	v->a[90256] = actions(3);
	v->a[90257] = 1;
	v->a[90258] = sym_comment;
	v->a[90259] = actions(982);
	small_parse_table_4513(v);
}

void	small_parse_table_4513(t_small_parse_table_array *v)
{
	v->a[90260] = 2;
	v->a[90261] = sym__concat;
	v->a[90262] = aux_sym_heredoc_redirect_token1;
	v->a[90263] = actions(980);
	v->a[90264] = 5;
	v->a[90265] = anon_sym_in;
	v->a[90266] = anon_sym_SEMI_SEMI;
	v->a[90267] = anon_sym_AMP;
	v->a[90268] = aux_sym_concatenation_token1;
	v->a[90269] = anon_sym_SEMI;
	v->a[90270] = 3;
	v->a[90271] = actions(3);
	v->a[90272] = 1;
	v->a[90273] = sym_comment;
	v->a[90274] = actions(1041);
	v->a[90275] = 2;
	v->a[90276] = sym__concat;
	v->a[90277] = aux_sym_heredoc_redirect_token1;
	v->a[90278] = actions(1039);
	v->a[90279] = 5;
	small_parse_table_4514(v);
}

void	small_parse_table_4514(t_small_parse_table_array *v)
{
	v->a[90280] = anon_sym_in;
	v->a[90281] = anon_sym_SEMI_SEMI;
	v->a[90282] = anon_sym_AMP;
	v->a[90283] = aux_sym_concatenation_token1;
	v->a[90284] = anon_sym_SEMI;
	v->a[90285] = 3;
	v->a[90286] = actions(3);
	v->a[90287] = 1;
	v->a[90288] = sym_comment;
	v->a[90289] = actions(1005);
	v->a[90290] = 2;
	v->a[90291] = sym__concat;
	v->a[90292] = aux_sym_heredoc_redirect_token1;
	v->a[90293] = actions(1003);
	v->a[90294] = 5;
	v->a[90295] = anon_sym_in;
	v->a[90296] = anon_sym_SEMI_SEMI;
	v->a[90297] = anon_sym_AMP;
	v->a[90298] = aux_sym_concatenation_token1;
	v->a[90299] = anon_sym_SEMI;
	small_parse_table_4515(v);
}

/* EOF small_parse_table_902.c */
