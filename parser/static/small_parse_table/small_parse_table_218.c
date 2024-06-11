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
	v->a[21800] = anon_sym_LT_AMP_DASH;
	v->a[21801] = anon_sym_GT_AMP_DASH;
	v->a[21802] = anon_sym_LT_LT;
	v->a[21803] = anon_sym_LT_LT_DASH;
	v->a[21804] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21805] = anon_sym_DQUOTE;
	v->a[21806] = sym_raw_string;
	v->a[21807] = sym_number;
	v->a[21808] = anon_sym_DOLLAR_LBRACE;
	v->a[21809] = anon_sym_DOLLAR_LPAREN;
	v->a[21810] = anon_sym_BQUOTE;
	v->a[21811] = sym_word;
	v->a[21812] = 14;
	v->a[21813] = actions(3);
	v->a[21814] = 1;
	v->a[21815] = sym_comment;
	v->a[21816] = actions(477);
	v->a[21817] = 1;
	v->a[21818] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21819] = actions(479);
	small_parse_table_1091(v);
}

void	small_parse_table_1091(t_small_parse_table_array *v)
{
	v->a[21820] = 1;
	v->a[21821] = anon_sym_DOLLAR;
	v->a[21822] = actions(481);
	v->a[21823] = 1;
	v->a[21824] = anon_sym_DQUOTE;
	v->a[21825] = actions(483);
	v->a[21826] = 1;
	v->a[21827] = anon_sym_DOLLAR_LBRACE;
	v->a[21828] = actions(485);
	v->a[21829] = 1;
	v->a[21830] = anon_sym_DOLLAR_LPAREN;
	v->a[21831] = actions(487);
	v->a[21832] = 1;
	v->a[21833] = anon_sym_BQUOTE;
	v->a[21834] = actions(489);
	v->a[21835] = 1;
	v->a[21836] = sym__bare_dollar;
	v->a[21837] = state(209);
	v->a[21838] = 1;
	v->a[21839] = aux_sym_command_repeat2;
	small_parse_table_1092(v);
}

void	small_parse_table_1092(t_small_parse_table_array *v)
{
	v->a[21840] = state(809);
	v->a[21841] = 1;
	v->a[21842] = sym_concatenation;
	v->a[21843] = actions(555);
	v->a[21844] = 2;
	v->a[21845] = sym_file_descriptor;
	v->a[21846] = ts_builtin_sym_end;
	v->a[21847] = actions(475);
	v->a[21848] = 3;
	v->a[21849] = sym_raw_string;
	v->a[21850] = sym_number;
	v->a[21851] = sym_word;
	v->a[21852] = state(339);
	v->a[21853] = 5;
	v->a[21854] = sym_arithmetic_expansion;
	v->a[21855] = sym_string;
	v->a[21856] = sym_simple_expansion;
	v->a[21857] = sym_expansion;
	v->a[21858] = sym_command_substitution;
	v->a[21859] = actions(557);
	small_parse_table_1093(v);
}

void	small_parse_table_1093(t_small_parse_table_array *v)
{
	v->a[21860] = 19;
	v->a[21861] = anon_sym_PIPE;
	v->a[21862] = anon_sym_SEMI_SEMI;
	v->a[21863] = anon_sym_AMP_AMP;
	v->a[21864] = anon_sym_PIPE_PIPE;
	v->a[21865] = anon_sym_LT;
	v->a[21866] = anon_sym_GT;
	v->a[21867] = anon_sym_GT_GT;
	v->a[21868] = anon_sym_AMP_GT;
	v->a[21869] = anon_sym_AMP_GT_GT;
	v->a[21870] = anon_sym_LT_AMP;
	v->a[21871] = anon_sym_GT_AMP;
	v->a[21872] = anon_sym_GT_PIPE;
	v->a[21873] = anon_sym_LT_AMP_DASH;
	v->a[21874] = anon_sym_GT_AMP_DASH;
	v->a[21875] = anon_sym_LT_LT;
	v->a[21876] = anon_sym_LT_LT_DASH;
	v->a[21877] = aux_sym_heredoc_redirect_token1;
	v->a[21878] = anon_sym_AMP;
	v->a[21879] = anon_sym_SEMI;
	small_parse_table_1094(v);
}

void	small_parse_table_1094(t_small_parse_table_array *v)
{
	v->a[21880] = 12;
	v->a[21881] = actions(3);
	v->a[21882] = 1;
	v->a[21883] = sym_comment;
	v->a[21884] = actions(566);
	v->a[21885] = 1;
	v->a[21886] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21887] = actions(569);
	v->a[21888] = 1;
	v->a[21889] = anon_sym_DOLLAR;
	v->a[21890] = actions(572);
	v->a[21891] = 1;
	v->a[21892] = anon_sym_DQUOTE;
	v->a[21893] = actions(575);
	v->a[21894] = 1;
	v->a[21895] = anon_sym_DOLLAR_LBRACE;
	v->a[21896] = actions(578);
	v->a[21897] = 1;
	v->a[21898] = anon_sym_DOLLAR_LPAREN;
	v->a[21899] = actions(581);
	small_parse_table_1095(v);
}

/* EOF small_parse_table_218.c */
