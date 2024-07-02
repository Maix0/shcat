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
	v->a[17600] = 1;
	v->a[17601] = sym_comment;
	v->a[17602] = actions(9);
	v->a[17603] = 1;
	v->a[17604] = anon_sym_for;
	v->a[17605] = actions(13);
	v->a[17606] = 1;
	v->a[17607] = anon_sym_if;
	v->a[17608] = actions(17);
	v->a[17609] = 1;
	v->a[17610] = anon_sym_LPAREN;
	v->a[17611] = actions(19);
	v->a[17612] = 1;
	v->a[17613] = anon_sym_LBRACE;
	v->a[17614] = actions(55);
	v->a[17615] = 1;
	v->a[17616] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17617] = actions(57);
	v->a[17618] = 1;
	v->a[17619] = anon_sym_DOLLAR;
	small_parse_table_881(v);
}

void	small_parse_table_881(t_small_parse_table_array *v)
{
	v->a[17620] = actions(59);
	v->a[17621] = 1;
	v->a[17622] = anon_sym_DQUOTE;
	v->a[17623] = actions(63);
	v->a[17624] = 1;
	v->a[17625] = anon_sym_DOLLAR_LBRACE;
	v->a[17626] = actions(65);
	v->a[17627] = 1;
	v->a[17628] = anon_sym_DOLLAR_LPAREN;
	v->a[17629] = actions(67);
	v->a[17630] = 1;
	v->a[17631] = anon_sym_BQUOTE;
	v->a[17632] = actions(69);
	v->a[17633] = 1;
	v->a[17634] = sym_file_descriptor;
	v->a[17635] = actions(359);
	v->a[17636] = 1;
	v->a[17637] = sym_variable_name;
	v->a[17638] = state(182);
	v->a[17639] = 1;
	small_parse_table_882(v);
}

void	small_parse_table_882(t_small_parse_table_array *v)
{
	v->a[17640] = sym_command_name;
	v->a[17641] = state(584);
	v->a[17642] = 1;
	v->a[17643] = sym_concatenation;
	v->a[17644] = state(620);
	v->a[17645] = 1;
	v->a[17646] = sym_file_redirect;
	v->a[17647] = state(623);
	v->a[17648] = 1;
	v->a[17649] = aux_sym_command_repeat1;
	v->a[17650] = state(1130);
	v->a[17651] = 1;
	v->a[17652] = sym_variable_assignment;
	v->a[17653] = state(1207);
	v->a[17654] = 1;
	v->a[17655] = aux_sym_redirected_statement_repeat2;
	v->a[17656] = actions(11);
	v->a[17657] = 2;
	v->a[17658] = anon_sym_while;
	v->a[17659] = anon_sym_until;
	small_parse_table_883(v);
}

void	small_parse_table_883(t_small_parse_table_array *v)
{
	v->a[17660] = actions(61);
	v->a[17661] = 3;
	v->a[17662] = sym_raw_string;
	v->a[17663] = sym_number;
	v->a[17664] = sym_word;
	v->a[17665] = state(433);
	v->a[17666] = 5;
	v->a[17667] = sym_arithmetic_expansion;
	v->a[17668] = sym_string;
	v->a[17669] = sym_simple_expansion;
	v->a[17670] = sym_expansion;
	v->a[17671] = sym_command_substitution;
	v->a[17672] = actions(53);
	v->a[17673] = 7;
	v->a[17674] = anon_sym_LT;
	v->a[17675] = anon_sym_GT;
	v->a[17676] = anon_sym_GT_GT;
	v->a[17677] = anon_sym_LT_AMP;
	v->a[17678] = anon_sym_GT_AMP;
	v->a[17679] = anon_sym_GT_PIPE;
	small_parse_table_884(v);
}

void	small_parse_table_884(t_small_parse_table_array *v)
{
	v->a[17680] = anon_sym_LT_GT;
	v->a[17681] = state(1128);
	v->a[17682] = 7;
	v->a[17683] = sym_for_statement;
	v->a[17684] = sym_while_statement;
	v->a[17685] = sym_if_statement;
	v->a[17686] = sym_compound_statement;
	v->a[17687] = sym_subshell;
	v->a[17688] = sym_command;
	v->a[17689] = sym__variable_assignments;
	v->a[17690] = 24;
	v->a[17691] = actions(3);
	v->a[17692] = 1;
	v->a[17693] = sym_comment;
	v->a[17694] = actions(313);
	v->a[17695] = 1;
	v->a[17696] = anon_sym_for;
	v->a[17697] = actions(317);
	v->a[17698] = 1;
	v->a[17699] = anon_sym_if;
	small_parse_table_885(v);
}

/* EOF small_parse_table_176.c */
