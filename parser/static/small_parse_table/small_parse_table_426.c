/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_426.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2130(t_small_parse_table_array *v)
{
	v->a[42600] = sym_comment;
	v->a[42601] = actions(580);
	v->a[42602] = 1;
	v->a[42603] = anon_sym_PIPE;
	v->a[42604] = actions(597);
	v->a[42605] = 1;
	v->a[42606] = anon_sym_LT_LT;
	v->a[42607] = actions(716);
	v->a[42608] = 1;
	v->a[42609] = ts_builtin_sym_end;
	v->a[42610] = actions(1874);
	v->a[42611] = 1;
	v->a[42612] = aux_sym_heredoc_redirect_token1;
	v->a[42613] = state(468);
	v->a[42614] = 1;
	v->a[42615] = sym_terminator;
	v->a[42616] = actions(693);
	v->a[42617] = 2;
	v->a[42618] = anon_sym_SEMI_SEMI;
	v->a[42619] = anon_sym_SEMI;
	small_parse_table_2131(v);
}

void	small_parse_table_2131(t_small_parse_table_array *v)
{
	v->a[42620] = actions(695);
	v->a[42621] = 2;
	v->a[42622] = anon_sym_AMP_AMP;
	v->a[42623] = anon_sym_PIPE_PIPE;
	v->a[42624] = actions(1872);
	v->a[42625] = 3;
	v->a[42626] = anon_sym_LT;
	v->a[42627] = anon_sym_GT;
	v->a[42628] = anon_sym_GT_GT;
	v->a[42629] = state(922);
	v->a[42630] = 3;
	v->a[42631] = sym_file_redirect;
	v->a[42632] = sym_heredoc_redirect;
	v->a[42633] = aux_sym_redirected_statement_repeat1;
	v->a[42634] = 10;
	v->a[42635] = actions(3);
	v->a[42636] = 1;
	v->a[42637] = sym_comment;
	v->a[42638] = actions(1569);
	v->a[42639] = 1;
	small_parse_table_2132(v);
}

void	small_parse_table_2132(t_small_parse_table_array *v)
{
	v->a[42640] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42641] = actions(1573);
	v->a[42642] = 1;
	v->a[42643] = anon_sym_DQUOTE;
	v->a[42644] = actions(1575);
	v->a[42645] = 1;
	v->a[42646] = anon_sym_DOLLAR_LBRACE;
	v->a[42647] = actions(1577);
	v->a[42648] = 1;
	v->a[42649] = anon_sym_DOLLAR_LPAREN;
	v->a[42650] = actions(1579);
	v->a[42651] = 1;
	v->a[42652] = anon_sym_BQUOTE;
	v->a[42653] = actions(1756);
	v->a[42654] = 1;
	v->a[42655] = anon_sym_DOLLAR;
	v->a[42656] = state(1489);
	v->a[42657] = 1;
	v->a[42658] = sym_concatenation;
	v->a[42659] = actions(1900);
	small_parse_table_2133(v);
}

void	small_parse_table_2133(t_small_parse_table_array *v)
{
	v->a[42660] = 3;
	v->a[42661] = sym_raw_string;
	v->a[42662] = sym_number;
	v->a[42663] = sym_word;
	v->a[42664] = state(1391);
	v->a[42665] = 5;
	v->a[42666] = sym_arithmetic_expansion;
	v->a[42667] = sym_string;
	v->a[42668] = sym_simple_expansion;
	v->a[42669] = sym_expansion;
	v->a[42670] = sym_command_substitution;
	v->a[42671] = 10;
	v->a[42672] = actions(3);
	v->a[42673] = 1;
	v->a[42674] = sym_comment;
	v->a[42675] = actions(580);
	v->a[42676] = 1;
	v->a[42677] = anon_sym_PIPE;
	v->a[42678] = actions(597);
	v->a[42679] = 1;
	small_parse_table_2134(v);
}

void	small_parse_table_2134(t_small_parse_table_array *v)
{
	v->a[42680] = anon_sym_LT_LT;
	v->a[42681] = actions(716);
	v->a[42682] = 1;
	v->a[42683] = ts_builtin_sym_end;
	v->a[42684] = actions(1874);
	v->a[42685] = 1;
	v->a[42686] = aux_sym_heredoc_redirect_token1;
	v->a[42687] = state(466);
	v->a[42688] = 1;
	v->a[42689] = sym_terminator;
	v->a[42690] = actions(693);
	v->a[42691] = 2;
	v->a[42692] = anon_sym_SEMI_SEMI;
	v->a[42693] = anon_sym_SEMI;
	v->a[42694] = actions(695);
	v->a[42695] = 2;
	v->a[42696] = anon_sym_AMP_AMP;
	v->a[42697] = anon_sym_PIPE_PIPE;
	v->a[42698] = actions(1872);
	v->a[42699] = 3;
	small_parse_table_2135(v);
}

/* EOF small_parse_table_426.c */
