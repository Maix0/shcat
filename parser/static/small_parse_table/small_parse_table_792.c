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
	v->a[79200] = 2;
	v->a[79201] = sym_concatenation;
	v->a[79202] = aux_sym_for_statement_repeat1;
	v->a[79203] = actions(1502);
	v->a[79204] = 3;
	v->a[79205] = sym_raw_string;
	v->a[79206] = sym_number;
	v->a[79207] = sym_word;
	v->a[79208] = state(926);
	v->a[79209] = 5;
	v->a[79210] = sym_arithmetic_expansion;
	v->a[79211] = sym_string;
	v->a[79212] = sym_simple_expansion;
	v->a[79213] = sym_expansion;
	v->a[79214] = sym_command_substitution;
	v->a[79215] = 10;
	v->a[79216] = actions(3);
	v->a[79217] = 1;
	v->a[79218] = sym_comment;
	v->a[79219] = actions(1504);
	small_parse_table_3961(v);
}

void	small_parse_table_3961(t_small_parse_table_array *v)
{
	v->a[79220] = 1;
	v->a[79221] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79222] = actions(1506);
	v->a[79223] = 1;
	v->a[79224] = anon_sym_DOLLAR;
	v->a[79225] = actions(1508);
	v->a[79226] = 1;
	v->a[79227] = anon_sym_DQUOTE;
	v->a[79228] = actions(1510);
	v->a[79229] = 1;
	v->a[79230] = anon_sym_DOLLAR_LBRACE;
	v->a[79231] = actions(1512);
	v->a[79232] = 1;
	v->a[79233] = anon_sym_DOLLAR_LPAREN;
	v->a[79234] = actions(1514);
	v->a[79235] = 1;
	v->a[79236] = anon_sym_BQUOTE;
	v->a[79237] = state(644);
	v->a[79238] = 2;
	v->a[79239] = sym_concatenation;
	small_parse_table_3962(v);
}

void	small_parse_table_3962(t_small_parse_table_array *v)
{
	v->a[79240] = aux_sym_for_statement_repeat1;
	v->a[79241] = actions(1502);
	v->a[79242] = 3;
	v->a[79243] = sym_raw_string;
	v->a[79244] = sym_number;
	v->a[79245] = sym_word;
	v->a[79246] = state(926);
	v->a[79247] = 5;
	v->a[79248] = sym_arithmetic_expansion;
	v->a[79249] = sym_string;
	v->a[79250] = sym_simple_expansion;
	v->a[79251] = sym_expansion;
	v->a[79252] = sym_command_substitution;
	v->a[79253] = 9;
	v->a[79254] = actions(754);
	v->a[79255] = 1;
	v->a[79256] = anon_sym_LT_LT;
	v->a[79257] = actions(870);
	v->a[79258] = 1;
	v->a[79259] = sym_comment;
	small_parse_table_3963(v);
}

void	small_parse_table_3963(t_small_parse_table_array *v)
{
	v->a[79260] = actions(2065);
	v->a[79261] = 1;
	v->a[79262] = sym_file_descriptor;
	v->a[79263] = actions(3057);
	v->a[79264] = 1;
	v->a[79265] = anon_sym_LT_LT_DASH;
	v->a[79266] = actions(3075);
	v->a[79267] = 2;
	v->a[79268] = anon_sym_AMP_AMP;
	v->a[79269] = anon_sym_PIPE_PIPE;
	v->a[79270] = actions(3077);
	v->a[79271] = 2;
	v->a[79272] = anon_sym_GT_GT;
	v->a[79273] = anon_sym_GT_PIPE;
	v->a[79274] = actions(3079);
	v->a[79275] = 2;
	v->a[79276] = anon_sym_LT_AMP_DASH;
	v->a[79277] = anon_sym_GT_AMP_DASH;
	v->a[79278] = state(1268);
	v->a[79279] = 3;
	small_parse_table_3964(v);
}

void	small_parse_table_3964(t_small_parse_table_array *v)
{
	v->a[79280] = sym_file_redirect;
	v->a[79281] = sym_heredoc_redirect;
	v->a[79282] = aux_sym_redirected_statement_repeat1;
	v->a[79283] = actions(2061);
	v->a[79284] = 4;
	v->a[79285] = anon_sym_LT;
	v->a[79286] = anon_sym_GT;
	v->a[79287] = anon_sym_LT_AMP;
	v->a[79288] = anon_sym_GT_AMP;
	v->a[79289] = 5;
	v->a[79290] = actions(3);
	v->a[79291] = 1;
	v->a[79292] = sym_comment;
	v->a[79293] = actions(3081);
	v->a[79294] = 1;
	v->a[79295] = anon_sym_PIPE;
	v->a[79296] = state(1563);
	v->a[79297] = 1;
	v->a[79298] = aux_sym_pipeline_repeat1;
	v->a[79299] = actions(2090);
	small_parse_table_3965(v);
}

/* EOF small_parse_table_792.c */
