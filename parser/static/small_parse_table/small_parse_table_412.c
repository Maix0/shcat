/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_412.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2060(t_small_parse_table_array *v)
{
	v->a[41200] = anon_sym_DOLLAR_LPAREN;
	v->a[41201] = anon_sym_BQUOTE;
	v->a[41202] = sym_word;
	v->a[41203] = anon_sym_SEMI;
	v->a[41204] = 16;
	v->a[41205] = actions(3);
	v->a[41206] = 1;
	v->a[41207] = sym_comment;
	v->a[41208] = actions(329);
	v->a[41209] = 1;
	v->a[41210] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41211] = actions(331);
	v->a[41212] = 1;
	v->a[41213] = anon_sym_DOLLAR;
	v->a[41214] = actions(333);
	v->a[41215] = 1;
	v->a[41216] = anon_sym_DQUOTE;
	v->a[41217] = actions(337);
	v->a[41218] = 1;
	v->a[41219] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2061(v);
}

void	small_parse_table_2061(t_small_parse_table_array *v)
{
	v->a[41220] = actions(339);
	v->a[41221] = 1;
	v->a[41222] = anon_sym_DOLLAR_LPAREN;
	v->a[41223] = actions(341);
	v->a[41224] = 1;
	v->a[41225] = anon_sym_BQUOTE;
	v->a[41226] = actions(359);
	v->a[41227] = 1;
	v->a[41228] = sym_variable_name;
	v->a[41229] = actions(1095);
	v->a[41230] = 1;
	v->a[41231] = sym_file_descriptor;
	v->a[41232] = state(346);
	v->a[41233] = 1;
	v->a[41234] = sym_command_name;
	v->a[41235] = state(896);
	v->a[41236] = 1;
	v->a[41237] = sym_concatenation;
	v->a[41238] = state(1203);
	v->a[41239] = 1;
	small_parse_table_2062(v);
}

void	small_parse_table_2062(t_small_parse_table_array *v)
{
	v->a[41240] = sym_file_redirect;
	v->a[41241] = state(968);
	v->a[41242] = 2;
	v->a[41243] = sym_variable_assignment;
	v->a[41244] = aux_sym_command_repeat1;
	v->a[41245] = actions(335);
	v->a[41246] = 3;
	v->a[41247] = sym_raw_string;
	v->a[41248] = sym_number;
	v->a[41249] = sym_word;
	v->a[41250] = state(725);
	v->a[41251] = 5;
	v->a[41252] = sym_arithmetic_expansion;
	v->a[41253] = sym_string;
	v->a[41254] = sym_simple_expansion;
	v->a[41255] = sym_expansion;
	v->a[41256] = sym_command_substitution;
	v->a[41257] = actions(1093);
	v->a[41258] = 7;
	v->a[41259] = anon_sym_LT;
	small_parse_table_2063(v);
}

void	small_parse_table_2063(t_small_parse_table_array *v)
{
	v->a[41260] = anon_sym_GT;
	v->a[41261] = anon_sym_GT_GT;
	v->a[41262] = anon_sym_LT_AMP;
	v->a[41263] = anon_sym_GT_AMP;
	v->a[41264] = anon_sym_GT_PIPE;
	v->a[41265] = anon_sym_LT_GT;
	v->a[41266] = 3;
	v->a[41267] = actions(3);
	v->a[41268] = 1;
	v->a[41269] = sym_comment;
	v->a[41270] = actions(1162);
	v->a[41271] = 2;
	v->a[41272] = sym_file_descriptor;
	v->a[41273] = sym__concat;
	v->a[41274] = actions(1160);
	v->a[41275] = 26;
	v->a[41276] = anon_sym_PIPE;
	v->a[41277] = anon_sym_RPAREN;
	v->a[41278] = anon_sym_SEMI_SEMI;
	v->a[41279] = anon_sym_AMP_AMP;
	small_parse_table_2064(v);
}

void	small_parse_table_2064(t_small_parse_table_array *v)
{
	v->a[41280] = anon_sym_PIPE_PIPE;
	v->a[41281] = anon_sym_LT;
	v->a[41282] = anon_sym_GT;
	v->a[41283] = anon_sym_GT_GT;
	v->a[41284] = anon_sym_LT_AMP;
	v->a[41285] = anon_sym_GT_AMP;
	v->a[41286] = anon_sym_GT_PIPE;
	v->a[41287] = anon_sym_LT_GT;
	v->a[41288] = anon_sym_LT_LT;
	v->a[41289] = anon_sym_LT_LT_DASH;
	v->a[41290] = aux_sym_heredoc_redirect_token1;
	v->a[41291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41292] = aux_sym_concatenation_token1;
	v->a[41293] = anon_sym_DOLLAR;
	v->a[41294] = anon_sym_DQUOTE;
	v->a[41295] = sym_raw_string;
	v->a[41296] = sym_number;
	v->a[41297] = anon_sym_DOLLAR_LBRACE;
	v->a[41298] = anon_sym_DOLLAR_LPAREN;
	v->a[41299] = anon_sym_BQUOTE;
	small_parse_table_2065(v);
}

/* EOF small_parse_table_412.c */
