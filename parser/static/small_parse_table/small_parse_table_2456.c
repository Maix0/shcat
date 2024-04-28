/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2456.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12280(t_small_parse_table_array *v)
{
	v->a[245600] = actions(6827);
	v->a[245601] = 21;
	v->a[245602] = sym__immediate_double_hash;
	v->a[245603] = sym__external_expansion_sym_hash;
	v->a[245604] = sym__external_expansion_sym_bang;
	v->a[245605] = sym__external_expansion_sym_equal;
	v->a[245606] = anon_sym_POUND;
	v->a[245607] = anon_sym_RBRACE3;
	v->a[245608] = anon_sym_AT;
	v->a[245609] = anon_sym_EQ2;
	v->a[245610] = anon_sym_COLON_EQ;
	v->a[245611] = anon_sym_DASH3;
	v->a[245612] = anon_sym_COLON_DASH;
	v->a[245613] = anon_sym_PLUS3;
	v->a[245614] = anon_sym_COLON_PLUS;
	v->a[245615] = anon_sym_QMARK2;
	v->a[245616] = anon_sym_COLON_QMARK;
	v->a[245617] = anon_sym_PERCENT_PERCENT;
	v->a[245618] = anon_sym_SLASH_SLASH;
	v->a[245619] = anon_sym_SLASH_POUND;
	small_parse_table_12281(v);
}

void	small_parse_table_12281(t_small_parse_table_array *v)
{
	v->a[245620] = anon_sym_SLASH_PERCENT;
	v->a[245621] = anon_sym_COMMA_COMMA;
	v->a[245622] = anon_sym_CARET_CARET;
	v->a[245623] = 6;
	v->a[245624] = actions(3);
	v->a[245625] = 1;
	v->a[245626] = sym_comment;
	v->a[245627] = actions(11389);
	v->a[245628] = 1;
	v->a[245629] = aux_sym_concatenation_token1;
	v->a[245630] = actions(11391);
	v->a[245631] = 1;
	v->a[245632] = sym__concat;
	v->a[245633] = state(4304);
	v->a[245634] = 1;
	v->a[245635] = aux_sym_concatenation_repeat1;
	v->a[245636] = actions(5697);
	v->a[245637] = 2;
	v->a[245638] = sym_file_descriptor;
	v->a[245639] = aux_sym_heredoc_redirect_token1;
	small_parse_table_12282(v);
}

void	small_parse_table_12282(t_small_parse_table_array *v)
{
	v->a[245640] = actions(5695);
	v->a[245641] = 22;
	v->a[245642] = anon_sym_SEMI;
	v->a[245643] = anon_sym_PIPE_PIPE;
	v->a[245644] = anon_sym_AMP_AMP;
	v->a[245645] = anon_sym_PIPE;
	v->a[245646] = anon_sym_AMP;
	v->a[245647] = anon_sym_LT;
	v->a[245648] = anon_sym_GT;
	v->a[245649] = anon_sym_LT_LT;
	v->a[245650] = anon_sym_GT_GT;
	v->a[245651] = anon_sym_esac;
	v->a[245652] = anon_sym_SEMI_SEMI;
	v->a[245653] = anon_sym_SEMI_AMP;
	v->a[245654] = anon_sym_SEMI_SEMI_AMP;
	v->a[245655] = anon_sym_PIPE_AMP;
	v->a[245656] = anon_sym_AMP_GT;
	v->a[245657] = anon_sym_AMP_GT_GT;
	v->a[245658] = anon_sym_LT_AMP;
	v->a[245659] = anon_sym_GT_AMP;
	small_parse_table_12283(v);
}

void	small_parse_table_12283(t_small_parse_table_array *v)
{
	v->a[245660] = anon_sym_GT_PIPE;
	v->a[245661] = anon_sym_LT_AMP_DASH;
	v->a[245662] = anon_sym_GT_AMP_DASH;
	v->a[245663] = anon_sym_LT_LT_DASH;
	v->a[245664] = 3;
	v->a[245665] = actions(3);
	v->a[245666] = 1;
	v->a[245667] = sym_comment;
	v->a[245668] = actions(1310);
	v->a[245669] = 5;
	v->a[245670] = sym_file_descriptor;
	v->a[245671] = sym__concat;
	v->a[245672] = sym_variable_name;
	v->a[245673] = ts_builtin_sym_end;
	v->a[245674] = aux_sym_heredoc_redirect_token1;
	v->a[245675] = actions(1308);
	v->a[245676] = 22;
	v->a[245677] = anon_sym_SEMI;
	v->a[245678] = anon_sym_PIPE_PIPE;
	v->a[245679] = anon_sym_AMP_AMP;
	small_parse_table_12284(v);
}

void	small_parse_table_12284(t_small_parse_table_array *v)
{
	v->a[245680] = anon_sym_PIPE;
	v->a[245681] = anon_sym_AMP;
	v->a[245682] = anon_sym_LT;
	v->a[245683] = anon_sym_GT;
	v->a[245684] = anon_sym_LT_LT;
	v->a[245685] = anon_sym_GT_GT;
	v->a[245686] = anon_sym_RPAREN;
	v->a[245687] = anon_sym_SEMI_SEMI;
	v->a[245688] = anon_sym_PIPE_AMP;
	v->a[245689] = anon_sym_AMP_GT;
	v->a[245690] = anon_sym_AMP_GT_GT;
	v->a[245691] = anon_sym_LT_AMP;
	v->a[245692] = anon_sym_GT_AMP;
	v->a[245693] = anon_sym_GT_PIPE;
	v->a[245694] = anon_sym_LT_AMP_DASH;
	v->a[245695] = anon_sym_GT_AMP_DASH;
	v->a[245696] = anon_sym_LT_LT_DASH;
	v->a[245697] = aux_sym_concatenation_token1;
	v->a[245698] = anon_sym_BQUOTE;
	v->a[245699] = 3;
	small_parse_table_12285(v);
}

/* EOF small_parse_table_2456.c */
