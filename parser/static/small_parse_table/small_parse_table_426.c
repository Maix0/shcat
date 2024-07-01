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
	v->a[42600] = state(1399);
	v->a[42601] = 5;
	v->a[42602] = sym_arithmetic_expansion;
	v->a[42603] = sym_string;
	v->a[42604] = sym_simple_expansion;
	v->a[42605] = sym_expansion;
	v->a[42606] = sym_command_substitution;
	v->a[42607] = actions(711);
	v->a[42608] = 14;
	v->a[42609] = anon_sym_PIPE;
	v->a[42610] = anon_sym_AMP_AMP;
	v->a[42611] = anon_sym_PIPE_PIPE;
	v->a[42612] = anon_sym_LT;
	v->a[42613] = anon_sym_GT;
	v->a[42614] = anon_sym_GT_GT;
	v->a[42615] = anon_sym_LT_AMP;
	v->a[42616] = anon_sym_GT_AMP;
	v->a[42617] = anon_sym_GT_PIPE;
	v->a[42618] = anon_sym_LT_AMP_DASH;
	v->a[42619] = anon_sym_GT_AMP_DASH;
	small_parse_table_2131(v);
}

void	small_parse_table_2131(t_small_parse_table_array *v)
{
	v->a[42620] = anon_sym_LT_LT;
	v->a[42621] = anon_sym_LT_LT_DASH;
	v->a[42622] = aux_sym_heredoc_redirect_token1;
	v->a[42623] = 3;
	v->a[42624] = actions(3);
	v->a[42625] = 1;
	v->a[42626] = sym_comment;
	v->a[42627] = actions(1015);
	v->a[42628] = 2;
	v->a[42629] = sym_file_descriptor;
	v->a[42630] = sym__concat;
	v->a[42631] = actions(1013);
	v->a[42632] = 28;
	v->a[42633] = anon_sym_PIPE;
	v->a[42634] = anon_sym_RPAREN;
	v->a[42635] = anon_sym_SEMI_SEMI;
	v->a[42636] = anon_sym_AMP_AMP;
	v->a[42637] = anon_sym_PIPE_PIPE;
	v->a[42638] = anon_sym_LT;
	v->a[42639] = anon_sym_GT;
	small_parse_table_2132(v);
}

void	small_parse_table_2132(t_small_parse_table_array *v)
{
	v->a[42640] = anon_sym_GT_GT;
	v->a[42641] = anon_sym_LT_AMP;
	v->a[42642] = anon_sym_GT_AMP;
	v->a[42643] = anon_sym_GT_PIPE;
	v->a[42644] = anon_sym_LT_AMP_DASH;
	v->a[42645] = anon_sym_GT_AMP_DASH;
	v->a[42646] = anon_sym_LT_LT;
	v->a[42647] = anon_sym_LT_LT_DASH;
	v->a[42648] = aux_sym_heredoc_redirect_token1;
	v->a[42649] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42650] = anon_sym_AMP;
	v->a[42651] = aux_sym_concatenation_token1;
	v->a[42652] = anon_sym_DOLLAR;
	v->a[42653] = anon_sym_DQUOTE;
	v->a[42654] = sym_raw_string;
	v->a[42655] = sym_number;
	v->a[42656] = anon_sym_DOLLAR_LBRACE;
	v->a[42657] = anon_sym_DOLLAR_LPAREN;
	v->a[42658] = anon_sym_BQUOTE;
	v->a[42659] = sym_word;
	small_parse_table_2133(v);
}

void	small_parse_table_2133(t_small_parse_table_array *v)
{
	v->a[42660] = anon_sym_SEMI;
	v->a[42661] = 3;
	v->a[42662] = actions(3);
	v->a[42663] = 1;
	v->a[42664] = sym_comment;
	v->a[42665] = actions(1041);
	v->a[42666] = 2;
	v->a[42667] = sym_file_descriptor;
	v->a[42668] = sym__concat;
	v->a[42669] = actions(1039);
	v->a[42670] = 28;
	v->a[42671] = anon_sym_PIPE;
	v->a[42672] = anon_sym_RPAREN;
	v->a[42673] = anon_sym_SEMI_SEMI;
	v->a[42674] = anon_sym_AMP_AMP;
	v->a[42675] = anon_sym_PIPE_PIPE;
	v->a[42676] = anon_sym_LT;
	v->a[42677] = anon_sym_GT;
	v->a[42678] = anon_sym_GT_GT;
	v->a[42679] = anon_sym_LT_AMP;
	small_parse_table_2134(v);
}

void	small_parse_table_2134(t_small_parse_table_array *v)
{
	v->a[42680] = anon_sym_GT_AMP;
	v->a[42681] = anon_sym_GT_PIPE;
	v->a[42682] = anon_sym_LT_AMP_DASH;
	v->a[42683] = anon_sym_GT_AMP_DASH;
	v->a[42684] = anon_sym_LT_LT;
	v->a[42685] = anon_sym_LT_LT_DASH;
	v->a[42686] = aux_sym_heredoc_redirect_token1;
	v->a[42687] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42688] = anon_sym_AMP;
	v->a[42689] = aux_sym_concatenation_token1;
	v->a[42690] = anon_sym_DOLLAR;
	v->a[42691] = anon_sym_DQUOTE;
	v->a[42692] = sym_raw_string;
	v->a[42693] = sym_number;
	v->a[42694] = anon_sym_DOLLAR_LBRACE;
	v->a[42695] = anon_sym_DOLLAR_LPAREN;
	v->a[42696] = anon_sym_BQUOTE;
	v->a[42697] = sym_word;
	v->a[42698] = anon_sym_SEMI;
	v->a[42699] = 3;
	small_parse_table_2135(v);
}

/* EOF small_parse_table_426.c */
