/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_176.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_880(t_small_parse_table_array *v)
{
	v->a[17600] = anon_sym_LT_AMP;
	v->a[17601] = anon_sym_GT_AMP;
	v->a[17602] = anon_sym_GT_PIPE;
	v->a[17603] = anon_sym_LT_AMP_DASH;
	v->a[17604] = anon_sym_GT_AMP_DASH;
	v->a[17605] = anon_sym_LT_LT;
	v->a[17606] = anon_sym_LT_LT_DASH;
	v->a[17607] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17608] = anon_sym_AMP;
	v->a[17609] = anon_sym_DOLLAR;
	v->a[17610] = sym__special_character;
	v->a[17611] = anon_sym_DQUOTE;
	v->a[17612] = sym_raw_string;
	v->a[17613] = aux_sym_number_token1;
	v->a[17614] = aux_sym_number_token2;
	v->a[17615] = anon_sym_DOLLAR_LBRACE;
	v->a[17616] = anon_sym_DOLLAR_LPAREN;
	v->a[17617] = anon_sym_BQUOTE;
	v->a[17618] = anon_sym_DOLLAR_BQUOTE;
	v->a[17619] = aux_sym__simple_variable_name_token1;
	small_parse_table_881(v);
}

void	small_parse_table_881(t_small_parse_table_array *v)
{
	v->a[17620] = sym_word;
	v->a[17621] = anon_sym_SEMI;
	v->a[17622] = 21;
	v->a[17623] = actions(3);
	v->a[17624] = 1;
	v->a[17625] = sym_comment;
	v->a[17626] = actions(2111);
	v->a[17627] = 1;
	v->a[17628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17629] = actions(2114);
	v->a[17630] = 1;
	v->a[17631] = anon_sym_DOLLAR;
	v->a[17632] = actions(2120);
	v->a[17633] = 1;
	v->a[17634] = anon_sym_DQUOTE;
	v->a[17635] = actions(2123);
	v->a[17636] = 1;
	v->a[17637] = aux_sym_number_token1;
	v->a[17638] = actions(2126);
	v->a[17639] = 1;
	small_parse_table_882(v);
}

void	small_parse_table_882(t_small_parse_table_array *v)
{
	v->a[17640] = aux_sym_number_token2;
	v->a[17641] = actions(2129);
	v->a[17642] = 1;
	v->a[17643] = anon_sym_DOLLAR_LBRACE;
	v->a[17644] = actions(2132);
	v->a[17645] = 1;
	v->a[17646] = anon_sym_DOLLAR_LPAREN;
	v->a[17647] = actions(2135);
	v->a[17648] = 1;
	v->a[17649] = anon_sym_BQUOTE;
	v->a[17650] = actions(2138);
	v->a[17651] = 1;
	v->a[17652] = anon_sym_DOLLAR_BQUOTE;
	v->a[17653] = actions(2144);
	v->a[17654] = 1;
	v->a[17655] = sym__bare_dollar;
	v->a[17656] = actions(2147);
	v->a[17657] = 1;
	v->a[17658] = sym__brace_start;
	v->a[17659] = actions(2728);
	small_parse_table_883(v);
}

void	small_parse_table_883(t_small_parse_table_array *v)
{
	v->a[17660] = 1;
	v->a[17661] = sym__special_character;
	v->a[17662] = actions(2731);
	v->a[17663] = 1;
	v->a[17664] = sym_test_operator;
	v->a[17665] = state(490);
	v->a[17666] = 1;
	v->a[17667] = aux_sym_command_repeat2;
	v->a[17668] = state(1232);
	v->a[17669] = 1;
	v->a[17670] = aux_sym__literal_repeat1;
	v->a[17671] = state(1293);
	v->a[17672] = 1;
	v->a[17673] = sym_concatenation;
	v->a[17674] = actions(1195);
	v->a[17675] = 2;
	v->a[17676] = sym_file_descriptor;
	v->a[17677] = aux_sym_heredoc_redirect_token1;
	v->a[17678] = actions(2725);
	v->a[17679] = 2;
	small_parse_table_884(v);
}

void	small_parse_table_884(t_small_parse_table_array *v)
{
	v->a[17680] = sym_raw_string;
	v->a[17681] = sym_word;
	v->a[17682] = state(1356);
	v->a[17683] = 7;
	v->a[17684] = sym_arithmetic_expansion;
	v->a[17685] = sym_brace_expression;
	v->a[17686] = sym_string;
	v->a[17687] = sym_number;
	v->a[17688] = sym_simple_expansion;
	v->a[17689] = sym_expansion;
	v->a[17690] = sym_command_substitution;
	v->a[17691] = actions(1193);
	v->a[17692] = 16;
	v->a[17693] = anon_sym_PIPE;
	v->a[17694] = anon_sym_PIPE_AMP;
	v->a[17695] = anon_sym_AMP_AMP;
	v->a[17696] = anon_sym_PIPE_PIPE;
	v->a[17697] = anon_sym_LT;
	v->a[17698] = anon_sym_GT;
	v->a[17699] = anon_sym_GT_GT;
	small_parse_table_885(v);
}

/* EOF small_parse_table_176.c */
