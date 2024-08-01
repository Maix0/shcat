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
	v->a[17600] = sym_concatenation;
	v->a[17601] = state(1585);
	v->a[17602] = 1;
	v->a[17603] = sym__heredoc_expression;
	v->a[17604] = state(1593);
	v->a[17605] = 1;
	v->a[17606] = sym__heredoc_pipeline;
	v->a[17607] = actions(649);
	v->a[17608] = 2;
	v->a[17609] = anon_sym_AMP_AMP;
	v->a[17610] = anon_sym_PIPE_PIPE;
	v->a[17611] = state(1371);
	v->a[17612] = 2;
	v->a[17613] = sym_file_redirect;
	v->a[17614] = aux_sym_redirected_statement_repeat2;
	v->a[17615] = actions(645);
	v->a[17616] = 3;
	v->a[17617] = sym_raw_string;
	v->a[17618] = sym_number;
	v->a[17619] = sym_word;
	small_parse_table_881(v);
}

void	small_parse_table_881(t_small_parse_table_array *v)
{
	v->a[17620] = actions(651);
	v->a[17621] = 3;
	v->a[17622] = anon_sym_LT;
	v->a[17623] = anon_sym_GT;
	v->a[17624] = anon_sym_GT_GT;
	v->a[17625] = state(1011);
	v->a[17626] = 5;
	v->a[17627] = sym_arithmetic_expansion;
	v->a[17628] = sym_string;
	v->a[17629] = sym_simple_expansion;
	v->a[17630] = sym_expansion;
	v->a[17631] = sym_command_substitution;
	v->a[17632] = 13;
	v->a[17633] = actions(3);
	v->a[17634] = 1;
	v->a[17635] = sym_comment;
	v->a[17636] = actions(53);
	v->a[17637] = 1;
	v->a[17638] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17639] = actions(55);
	small_parse_table_882(v);
}

void	small_parse_table_882(t_small_parse_table_array *v)
{
	v->a[17640] = 1;
	v->a[17641] = anon_sym_DOLLAR;
	v->a[17642] = actions(57);
	v->a[17643] = 1;
	v->a[17644] = anon_sym_DQUOTE;
	v->a[17645] = actions(61);
	v->a[17646] = 1;
	v->a[17647] = anon_sym_DOLLAR_LBRACE;
	v->a[17648] = actions(63);
	v->a[17649] = 1;
	v->a[17650] = anon_sym_DOLLAR_LPAREN;
	v->a[17651] = actions(65);
	v->a[17652] = 1;
	v->a[17653] = anon_sym_BQUOTE;
	v->a[17654] = actions(419);
	v->a[17655] = 1;
	v->a[17656] = sym__bare_dollar;
	v->a[17657] = state(196);
	v->a[17658] = 1;
	v->a[17659] = aux_sym_command_repeat2;
	small_parse_table_883(v);
}

void	small_parse_table_883(t_small_parse_table_array *v)
{
	v->a[17660] = state(570);
	v->a[17661] = 1;
	v->a[17662] = sym_concatenation;
	v->a[17663] = actions(602);
	v->a[17664] = 3;
	v->a[17665] = sym_raw_string;
	v->a[17666] = sym_number;
	v->a[17667] = sym_word;
	v->a[17668] = state(431);
	v->a[17669] = 5;
	v->a[17670] = sym_arithmetic_expansion;
	v->a[17671] = sym_string;
	v->a[17672] = sym_simple_expansion;
	v->a[17673] = sym_expansion;
	v->a[17674] = sym_command_substitution;
	v->a[17675] = actions(417);
	v->a[17676] = 10;
	v->a[17677] = anon_sym_PIPE;
	v->a[17678] = anon_sym_SEMI_SEMI;
	v->a[17679] = anon_sym_AMP_AMP;
	small_parse_table_884(v);
}

void	small_parse_table_884(t_small_parse_table_array *v)
{
	v->a[17680] = anon_sym_PIPE_PIPE;
	v->a[17681] = anon_sym_LT;
	v->a[17682] = anon_sym_GT;
	v->a[17683] = anon_sym_GT_GT;
	v->a[17684] = anon_sym_LT_LT;
	v->a[17685] = aux_sym_heredoc_redirect_token1;
	v->a[17686] = anon_sym_SEMI;
	v->a[17687] = 11;
	v->a[17688] = actions(3);
	v->a[17689] = 1;
	v->a[17690] = sym_comment;
	v->a[17691] = actions(578);
	v->a[17692] = 1;
	v->a[17693] = anon_sym_RPAREN;
	v->a[17694] = actions(580);
	v->a[17695] = 1;
	v->a[17696] = anon_sym_PIPE;
	v->a[17697] = actions(597);
	v->a[17698] = 1;
	v->a[17699] = anon_sym_LT_LT;
	small_parse_table_885(v);
}

/* EOF small_parse_table_176.c */
