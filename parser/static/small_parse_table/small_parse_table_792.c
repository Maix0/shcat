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
	v->a[79200] = anon_sym_DOLLAR_LBRACE;
	v->a[79201] = actions(2817);
	v->a[79202] = 1;
	v->a[79203] = anon_sym_DOLLAR_LPAREN;
	v->a[79204] = actions(2819);
	v->a[79205] = 1;
	v->a[79206] = anon_sym_BQUOTE;
	v->a[79207] = actions(2821);
	v->a[79208] = 1;
	v->a[79209] = sym__bare_dollar;
	v->a[79210] = actions(2905);
	v->a[79211] = 1;
	v->a[79212] = anon_sym_DOLLAR;
	v->a[79213] = actions(2807);
	v->a[79214] = 5;
	v->a[79215] = aux_sym_concatenation_token1;
	v->a[79216] = sym_raw_string;
	v->a[79217] = sym_number;
	v->a[79218] = sym__comment_word;
	v->a[79219] = sym_word;
	small_parse_table_3961(v);
}

void	small_parse_table_3961(t_small_parse_table_array *v)
{
	v->a[79220] = state(992);
	v->a[79221] = 5;
	v->a[79222] = sym_arithmetic_expansion;
	v->a[79223] = sym_string;
	v->a[79224] = sym_simple_expansion;
	v->a[79225] = sym_expansion;
	v->a[79226] = sym_command_substitution;
	v->a[79227] = 10;
	v->a[79228] = actions(3);
	v->a[79229] = 1;
	v->a[79230] = sym_comment;
	v->a[79231] = actions(904);
	v->a[79232] = 1;
	v->a[79233] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79234] = actions(908);
	v->a[79235] = 1;
	v->a[79236] = anon_sym_DQUOTE;
	v->a[79237] = actions(910);
	v->a[79238] = 1;
	v->a[79239] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3962(v);
}

void	small_parse_table_3962(t_small_parse_table_array *v)
{
	v->a[79240] = actions(912);
	v->a[79241] = 1;
	v->a[79242] = anon_sym_DOLLAR_LPAREN;
	v->a[79243] = actions(914);
	v->a[79244] = 1;
	v->a[79245] = anon_sym_BQUOTE;
	v->a[79246] = actions(2827);
	v->a[79247] = 1;
	v->a[79248] = sym__bare_dollar;
	v->a[79249] = actions(2907);
	v->a[79250] = 1;
	v->a[79251] = anon_sym_DOLLAR;
	v->a[79252] = actions(2823);
	v->a[79253] = 5;
	v->a[79254] = aux_sym_concatenation_token1;
	v->a[79255] = sym_raw_string;
	v->a[79256] = sym_number;
	v->a[79257] = sym__comment_word;
	v->a[79258] = sym_word;
	v->a[79259] = state(1040);
	small_parse_table_3963(v);
}

void	small_parse_table_3963(t_small_parse_table_array *v)
{
	v->a[79260] = 5;
	v->a[79261] = sym_arithmetic_expansion;
	v->a[79262] = sym_string;
	v->a[79263] = sym_simple_expansion;
	v->a[79264] = sym_expansion;
	v->a[79265] = sym_command_substitution;
	v->a[79266] = 3;
	v->a[79267] = actions(1074);
	v->a[79268] = 1;
	v->a[79269] = sym_comment;
	v->a[79270] = actions(1090);
	v->a[79271] = 7;
	v->a[79272] = anon_sym_PIPE;
	v->a[79273] = anon_sym_LT;
	v->a[79274] = anon_sym_GT;
	v->a[79275] = anon_sym_AMP_GT;
	v->a[79276] = anon_sym_LT_AMP;
	v->a[79277] = anon_sym_GT_AMP;
	v->a[79278] = anon_sym_LT_LT;
	v->a[79279] = actions(1094);
	small_parse_table_3964(v);
}

void	small_parse_table_3964(t_small_parse_table_array *v)
{
	v->a[79280] = 10;
	v->a[79281] = sym_file_descriptor;
	v->a[79282] = sym_variable_name;
	v->a[79283] = anon_sym_AMP_AMP;
	v->a[79284] = anon_sym_PIPE_PIPE;
	v->a[79285] = anon_sym_GT_GT;
	v->a[79286] = anon_sym_AMP_GT_GT;
	v->a[79287] = anon_sym_GT_PIPE;
	v->a[79288] = anon_sym_LT_AMP_DASH;
	v->a[79289] = anon_sym_GT_AMP_DASH;
	v->a[79290] = anon_sym_LT_LT_DASH;
	v->a[79291] = 10;
	v->a[79292] = actions(3);
	v->a[79293] = 1;
	v->a[79294] = sym_comment;
	v->a[79295] = actions(2911);
	v->a[79296] = 1;
	v->a[79297] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79298] = actions(2913);
	v->a[79299] = 1;
	small_parse_table_3965(v);
}

/* EOF small_parse_table_792.c */
