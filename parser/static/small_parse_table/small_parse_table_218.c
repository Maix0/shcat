/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_218.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1090(t_small_parse_table_array *v)
{
	v->a[21800] = anon_sym_SEMI_SEMI;
	v->a[21801] = anon_sym_AMP_AMP;
	v->a[21802] = anon_sym_PIPE_PIPE;
	v->a[21803] = anon_sym_LT;
	v->a[21804] = anon_sym_GT;
	v->a[21805] = anon_sym_GT_GT;
	v->a[21806] = anon_sym_AMP_GT;
	v->a[21807] = anon_sym_AMP_GT_GT;
	v->a[21808] = anon_sym_LT_AMP;
	v->a[21809] = anon_sym_GT_AMP;
	v->a[21810] = anon_sym_GT_PIPE;
	v->a[21811] = anon_sym_LT_AMP_DASH;
	v->a[21812] = anon_sym_GT_AMP_DASH;
	v->a[21813] = anon_sym_LT_LT;
	v->a[21814] = anon_sym_LT_LT_DASH;
	v->a[21815] = aux_sym_heredoc_redirect_token1;
	v->a[21816] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21817] = anon_sym_AMP;
	v->a[21818] = anon_sym_DQUOTE;
	v->a[21819] = sym_raw_string;
	small_parse_table_1091(v);
}

void	small_parse_table_1091(t_small_parse_table_array *v)
{
	v->a[21820] = aux_sym_number_token1;
	v->a[21821] = aux_sym_number_token2;
	v->a[21822] = anon_sym_DOLLAR_LBRACE;
	v->a[21823] = anon_sym_DOLLAR_LPAREN;
	v->a[21824] = anon_sym_BQUOTE;
	v->a[21825] = sym_word;
	v->a[21826] = anon_sym_SEMI;
	v->a[21827] = 18;
	v->a[21828] = actions(3);
	v->a[21829] = 1;
	v->a[21830] = sym_comment;
	v->a[21831] = actions(17);
	v->a[21832] = 1;
	v->a[21833] = anon_sym_LPAREN;
	v->a[21834] = actions(527);
	v->a[21835] = 1;
	v->a[21836] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21837] = actions(529);
	v->a[21838] = 1;
	v->a[21839] = anon_sym_DOLLAR;
	small_parse_table_1092(v);
}

void	small_parse_table_1092(t_small_parse_table_array *v)
{
	v->a[21840] = actions(531);
	v->a[21841] = 1;
	v->a[21842] = anon_sym_DQUOTE;
	v->a[21843] = actions(533);
	v->a[21844] = 1;
	v->a[21845] = aux_sym_number_token1;
	v->a[21846] = actions(535);
	v->a[21847] = 1;
	v->a[21848] = aux_sym_number_token2;
	v->a[21849] = actions(537);
	v->a[21850] = 1;
	v->a[21851] = anon_sym_DOLLAR_LBRACE;
	v->a[21852] = actions(539);
	v->a[21853] = 1;
	v->a[21854] = anon_sym_DOLLAR_LPAREN;
	v->a[21855] = actions(541);
	v->a[21856] = 1;
	v->a[21857] = anon_sym_BQUOTE;
	v->a[21858] = actions(543);
	v->a[21859] = 1;
	small_parse_table_1093(v);
}

void	small_parse_table_1093(t_small_parse_table_array *v)
{
	v->a[21860] = sym__bare_dollar;
	v->a[21861] = state(200);
	v->a[21862] = 1;
	v->a[21863] = aux_sym_command_repeat2;
	v->a[21864] = state(739);
	v->a[21865] = 1;
	v->a[21866] = sym_concatenation;
	v->a[21867] = state(1206);
	v->a[21868] = 1;
	v->a[21869] = sym_subshell;
	v->a[21870] = actions(473);
	v->a[21871] = 2;
	v->a[21872] = sym_file_descriptor;
	v->a[21873] = ts_builtin_sym_end;
	v->a[21874] = actions(525);
	v->a[21875] = 2;
	v->a[21876] = sym_raw_string;
	v->a[21877] = sym_word;
	v->a[21878] = state(343);
	v->a[21879] = 6;
	small_parse_table_1094(v);
}

void	small_parse_table_1094(t_small_parse_table_array *v)
{
	v->a[21880] = sym_arithmetic_expansion;
	v->a[21881] = sym_string;
	v->a[21882] = sym_number;
	v->a[21883] = sym_simple_expansion;
	v->a[21884] = sym_expansion;
	v->a[21885] = sym_command_substitution;
	v->a[21886] = actions(455);
	v->a[21887] = 19;
	v->a[21888] = anon_sym_PIPE;
	v->a[21889] = anon_sym_SEMI_SEMI;
	v->a[21890] = anon_sym_AMP_AMP;
	v->a[21891] = anon_sym_PIPE_PIPE;
	v->a[21892] = anon_sym_LT;
	v->a[21893] = anon_sym_GT;
	v->a[21894] = anon_sym_GT_GT;
	v->a[21895] = anon_sym_AMP_GT;
	v->a[21896] = anon_sym_AMP_GT_GT;
	v->a[21897] = anon_sym_LT_AMP;
	v->a[21898] = anon_sym_GT_AMP;
	v->a[21899] = anon_sym_GT_PIPE;
	small_parse_table_1095(v);
}

/* EOF small_parse_table_218.c */
