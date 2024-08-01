/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_366.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1830(t_small_parse_table_array *v)
{
	v->a[36600] = sym_simple_expansion;
	v->a[36601] = sym_expansion;
	v->a[36602] = sym_command_substitution;
	v->a[36603] = 4;
	v->a[36604] = actions(3);
	v->a[36605] = 1;
	v->a[36606] = sym_comment;
	v->a[36607] = actions(1278);
	v->a[36608] = 1;
	v->a[36609] = sym_variable_name;
	v->a[36610] = actions(1276);
	v->a[36611] = 7;
	v->a[36612] = anon_sym_PIPE;
	v->a[36613] = anon_sym_AMP_AMP;
	v->a[36614] = anon_sym_PIPE_PIPE;
	v->a[36615] = anon_sym_LT;
	v->a[36616] = anon_sym_GT;
	v->a[36617] = anon_sym_GT_GT;
	v->a[36618] = anon_sym_LT_LT;
	v->a[36619] = actions(576);
	small_parse_table_1831(v);
}

void	small_parse_table_1831(t_small_parse_table_array *v)
{
	v->a[36620] = 9;
	v->a[36621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36622] = anon_sym_DOLLAR;
	v->a[36623] = anon_sym_DQUOTE;
	v->a[36624] = sym_raw_string;
	v->a[36625] = sym_number;
	v->a[36626] = anon_sym_DOLLAR_LBRACE;
	v->a[36627] = anon_sym_DOLLAR_LPAREN;
	v->a[36628] = anon_sym_BQUOTE;
	v->a[36629] = sym_word;
	v->a[36630] = 10;
	v->a[36631] = actions(3);
	v->a[36632] = 1;
	v->a[36633] = sym_comment;
	v->a[36634] = actions(53);
	v->a[36635] = 1;
	v->a[36636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36637] = actions(57);
	v->a[36638] = 1;
	v->a[36639] = anon_sym_DQUOTE;
	small_parse_table_1832(v);
}

void	small_parse_table_1832(t_small_parse_table_array *v)
{
	v->a[36640] = actions(61);
	v->a[36641] = 1;
	v->a[36642] = anon_sym_DOLLAR_LBRACE;
	v->a[36643] = actions(63);
	v->a[36644] = 1;
	v->a[36645] = anon_sym_DOLLAR_LPAREN;
	v->a[36646] = actions(65);
	v->a[36647] = 1;
	v->a[36648] = anon_sym_BQUOTE;
	v->a[36649] = actions(1499);
	v->a[36650] = 1;
	v->a[36651] = anon_sym_DOLLAR;
	v->a[36652] = actions(1501);
	v->a[36653] = 1;
	v->a[36654] = sym__bare_dollar;
	v->a[36655] = actions(1497);
	v->a[36656] = 5;
	v->a[36657] = aux_sym_concatenation_token1;
	v->a[36658] = sym_raw_string;
	v->a[36659] = sym_number;
	small_parse_table_1833(v);
}

void	small_parse_table_1833(t_small_parse_table_array *v)
{
	v->a[36660] = sym__comment_word;
	v->a[36661] = sym_word;
	v->a[36662] = state(403);
	v->a[36663] = 5;
	v->a[36664] = sym_arithmetic_expansion;
	v->a[36665] = sym_string;
	v->a[36666] = sym_simple_expansion;
	v->a[36667] = sym_expansion;
	v->a[36668] = sym_command_substitution;
	v->a[36669] = 10;
	v->a[36670] = actions(3);
	v->a[36671] = 1;
	v->a[36672] = sym_comment;
	v->a[36673] = actions(1505);
	v->a[36674] = 1;
	v->a[36675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36676] = actions(1507);
	v->a[36677] = 1;
	v->a[36678] = anon_sym_DOLLAR;
	v->a[36679] = actions(1509);
	small_parse_table_1834(v);
}

void	small_parse_table_1834(t_small_parse_table_array *v)
{
	v->a[36680] = 1;
	v->a[36681] = anon_sym_DQUOTE;
	v->a[36682] = actions(1511);
	v->a[36683] = 1;
	v->a[36684] = anon_sym_DOLLAR_LBRACE;
	v->a[36685] = actions(1513);
	v->a[36686] = 1;
	v->a[36687] = anon_sym_DOLLAR_LPAREN;
	v->a[36688] = actions(1515);
	v->a[36689] = 1;
	v->a[36690] = anon_sym_BQUOTE;
	v->a[36691] = actions(1517);
	v->a[36692] = 1;
	v->a[36693] = sym__bare_dollar;
	v->a[36694] = actions(1503);
	v->a[36695] = 5;
	v->a[36696] = aux_sym_concatenation_token1;
	v->a[36697] = sym_raw_string;
	v->a[36698] = sym_number;
	v->a[36699] = sym__comment_word;
	small_parse_table_1835(v);
}

/* EOF small_parse_table_366.c */
