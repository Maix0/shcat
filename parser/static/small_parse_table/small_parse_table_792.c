/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_792.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3960(t_small_parse_table_array *v)
{
	v->a[79200] = anon_sym_GT_AMP_DASH;
	v->a[79201] = actions(3260);
	v->a[79202] = 3;
	v->a[79203] = anon_sym_GT_GT;
	v->a[79204] = anon_sym_AMP_GT_GT;
	v->a[79205] = anon_sym_GT_PIPE;
	v->a[79206] = state(1095);
	v->a[79207] = 3;
	v->a[79208] = sym_file_redirect;
	v->a[79209] = sym_heredoc_redirect;
	v->a[79210] = aux_sym_redirected_statement_repeat1;
	v->a[79211] = actions(2346);
	v->a[79212] = 5;
	v->a[79213] = anon_sym_LT;
	v->a[79214] = anon_sym_GT;
	v->a[79215] = anon_sym_AMP_GT;
	v->a[79216] = anon_sym_LT_AMP;
	v->a[79217] = anon_sym_GT_AMP;
	v->a[79218] = 12;
	v->a[79219] = actions(3);
	small_parse_table_3961(v);
}

void	small_parse_table_3961(t_small_parse_table_array *v)
{
	v->a[79220] = 1;
	v->a[79221] = sym_comment;
	v->a[79222] = actions(1749);
	v->a[79223] = 1;
	v->a[79224] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79225] = actions(1753);
	v->a[79226] = 1;
	v->a[79227] = anon_sym_DQUOTE;
	v->a[79228] = actions(1755);
	v->a[79229] = 1;
	v->a[79230] = aux_sym_number_token1;
	v->a[79231] = actions(1757);
	v->a[79232] = 1;
	v->a[79233] = aux_sym_number_token2;
	v->a[79234] = actions(1759);
	v->a[79235] = 1;
	v->a[79236] = anon_sym_DOLLAR_LBRACE;
	v->a[79237] = actions(1761);
	v->a[79238] = 1;
	v->a[79239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3962(v);
}

void	small_parse_table_3962(t_small_parse_table_array *v)
{
	v->a[79240] = actions(1763);
	v->a[79241] = 1;
	v->a[79242] = anon_sym_BQUOTE;
	v->a[79243] = actions(3266);
	v->a[79244] = 1;
	v->a[79245] = anon_sym_DOLLAR;
	v->a[79246] = actions(3268);
	v->a[79247] = 1;
	v->a[79248] = sym__bare_dollar;
	v->a[79249] = actions(3264);
	v->a[79250] = 3;
	v->a[79251] = sym_raw_string;
	v->a[79252] = sym__comment_word;
	v->a[79253] = sym_word;
	v->a[79254] = state(966);
	v->a[79255] = 6;
	v->a[79256] = sym_arithmetic_expansion;
	v->a[79257] = sym_string;
	v->a[79258] = sym_number;
	v->a[79259] = sym_simple_expansion;
	small_parse_table_3963(v);
}

void	small_parse_table_3963(t_small_parse_table_array *v)
{
	v->a[79260] = sym_expansion;
	v->a[79261] = sym_command_substitution;
	v->a[79262] = 12;
	v->a[79263] = actions(3);
	v->a[79264] = 1;
	v->a[79265] = sym_comment;
	v->a[79266] = actions(2905);
	v->a[79267] = 1;
	v->a[79268] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79269] = actions(2907);
	v->a[79270] = 1;
	v->a[79271] = anon_sym_DOLLAR;
	v->a[79272] = actions(2909);
	v->a[79273] = 1;
	v->a[79274] = anon_sym_DQUOTE;
	v->a[79275] = actions(2911);
	v->a[79276] = 1;
	v->a[79277] = aux_sym_number_token1;
	v->a[79278] = actions(2913);
	v->a[79279] = 1;
	small_parse_table_3964(v);
}

void	small_parse_table_3964(t_small_parse_table_array *v)
{
	v->a[79280] = aux_sym_number_token2;
	v->a[79281] = actions(2915);
	v->a[79282] = 1;
	v->a[79283] = anon_sym_DOLLAR_LBRACE;
	v->a[79284] = actions(2917);
	v->a[79285] = 1;
	v->a[79286] = anon_sym_DOLLAR_LPAREN;
	v->a[79287] = actions(2919);
	v->a[79288] = 1;
	v->a[79289] = anon_sym_BQUOTE;
	v->a[79290] = actions(3272);
	v->a[79291] = 1;
	v->a[79292] = sym__bare_dollar;
	v->a[79293] = actions(3270);
	v->a[79294] = 3;
	v->a[79295] = sym_raw_string;
	v->a[79296] = sym__comment_word;
	v->a[79297] = sym_word;
	v->a[79298] = state(532);
	v->a[79299] = 6;
	small_parse_table_3965(v);
}

/* EOF small_parse_table_792.c */
