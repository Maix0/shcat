/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1966.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9830(t_small_parse_table_array *v)
{
	v->a[196600] = sym_expansion;
	v->a[196601] = sym_command_substitution;
	v->a[196602] = sym_process_substitution;
	v->a[196603] = 8;
	v->a[196604] = actions(3);
	v->a[196605] = 1;
	v->a[196606] = sym_comment;
	v->a[196607] = actions(1235);
	v->a[196608] = 1;
	v->a[196609] = sym_file_descriptor;
	v->a[196610] = actions(4084);
	v->a[196611] = 1;
	v->a[196612] = anon_sym_DQUOTE;
	v->a[196613] = actions(7613);
	v->a[196614] = 1;
	v->a[196615] = sym_variable_name;
	v->a[196616] = state(4606);
	v->a[196617] = 1;
	v->a[196618] = sym_string;
	v->a[196619] = actions(7611);
	small_parse_table_9831(v);
}

void	small_parse_table_9831(t_small_parse_table_array *v)
{
	v->a[196620] = 2;
	v->a[196621] = aux_sym__simple_variable_name_token1;
	v->a[196622] = aux_sym__multiline_variable_name_token1;
	v->a[196623] = actions(7609);
	v->a[196624] = 9;
	v->a[196625] = anon_sym_DASH;
	v->a[196626] = anon_sym_STAR;
	v->a[196627] = anon_sym_BANG;
	v->a[196628] = anon_sym_QMARK;
	v->a[196629] = anon_sym_DOLLAR;
	v->a[196630] = anon_sym_POUND;
	v->a[196631] = anon_sym_AT2;
	v->a[196632] = anon_sym_0;
	v->a[196633] = anon_sym__;
	v->a[196634] = actions(1227);
	v->a[196635] = 17;
	v->a[196636] = anon_sym_PIPE_PIPE;
	v->a[196637] = anon_sym_AMP_AMP;
	v->a[196638] = anon_sym_PIPE;
	v->a[196639] = anon_sym_LT;
	small_parse_table_9832(v);
}

void	small_parse_table_9832(t_small_parse_table_array *v)
{
	v->a[196640] = anon_sym_GT;
	v->a[196641] = anon_sym_LT_LT;
	v->a[196642] = anon_sym_GT_GT;
	v->a[196643] = anon_sym_PIPE_AMP;
	v->a[196644] = anon_sym_AMP_GT;
	v->a[196645] = anon_sym_AMP_GT_GT;
	v->a[196646] = anon_sym_LT_AMP;
	v->a[196647] = anon_sym_GT_AMP;
	v->a[196648] = anon_sym_GT_PIPE;
	v->a[196649] = anon_sym_LT_AMP_DASH;
	v->a[196650] = anon_sym_GT_AMP_DASH;
	v->a[196651] = anon_sym_LT_LT_DASH;
	v->a[196652] = aux_sym_heredoc_redirect_token1;
	v->a[196653] = 21;
	v->a[196654] = actions(71);
	v->a[196655] = 1;
	v->a[196656] = sym_comment;
	v->a[196657] = actions(8565);
	v->a[196658] = 1;
	v->a[196659] = sym_word;
	small_parse_table_9833(v);
}

void	small_parse_table_9833(t_small_parse_table_array *v)
{
	v->a[196660] = actions(8571);
	v->a[196661] = 1;
	v->a[196662] = anon_sym_DOLLAR_LBRACK;
	v->a[196663] = actions(8573);
	v->a[196664] = 1;
	v->a[196665] = anon_sym_DOLLAR;
	v->a[196666] = actions(8575);
	v->a[196667] = 1;
	v->a[196668] = sym__special_character;
	v->a[196669] = actions(8577);
	v->a[196670] = 1;
	v->a[196671] = anon_sym_DQUOTE;
	v->a[196672] = actions(8581);
	v->a[196673] = 1;
	v->a[196674] = aux_sym_number_token1;
	v->a[196675] = actions(8583);
	v->a[196676] = 1;
	v->a[196677] = aux_sym_number_token2;
	v->a[196678] = actions(8585);
	v->a[196679] = 1;
	small_parse_table_9834(v);
}

void	small_parse_table_9834(t_small_parse_table_array *v)
{
	v->a[196680] = anon_sym_DOLLAR_LBRACE;
	v->a[196681] = actions(8587);
	v->a[196682] = 1;
	v->a[196683] = anon_sym_DOLLAR_LPAREN;
	v->a[196684] = actions(8589);
	v->a[196685] = 1;
	v->a[196686] = anon_sym_BQUOTE;
	v->a[196687] = actions(8591);
	v->a[196688] = 1;
	v->a[196689] = anon_sym_DOLLAR_BQUOTE;
	v->a[196690] = actions(8595);
	v->a[196691] = 1;
	v->a[196692] = sym_test_operator;
	v->a[196693] = actions(8597);
	v->a[196694] = 1;
	v->a[196695] = sym__brace_start;
	v->a[196696] = actions(8816);
	v->a[196697] = 1;
	v->a[196698] = anon_sym_RPAREN;
	v->a[196699] = state(5365);
	small_parse_table_9835(v);
}

/* EOF small_parse_table_1966.c */
