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
	v->a[21800] = anon_sym_AMP;
	v->a[21801] = anon_sym_DOLLAR;
	v->a[21802] = anon_sym_DQUOTE;
	v->a[21803] = sym_raw_string;
	v->a[21804] = sym_number;
	v->a[21805] = anon_sym_DOLLAR_LBRACE;
	v->a[21806] = anon_sym_DOLLAR_LPAREN;
	v->a[21807] = anon_sym_BQUOTE;
	v->a[21808] = sym_word;
	v->a[21809] = anon_sym_SEMI;
	v->a[21810] = 12;
	v->a[21811] = actions(3);
	v->a[21812] = 1;
	v->a[21813] = sym_comment;
	v->a[21814] = actions(609);
	v->a[21815] = 1;
	v->a[21816] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21817] = actions(612);
	v->a[21818] = 1;
	v->a[21819] = anon_sym_DOLLAR;
	small_parse_table_1091(v);
}

void	small_parse_table_1091(t_small_parse_table_array *v)
{
	v->a[21820] = actions(615);
	v->a[21821] = 1;
	v->a[21822] = anon_sym_DQUOTE;
	v->a[21823] = actions(618);
	v->a[21824] = 1;
	v->a[21825] = anon_sym_DOLLAR_LBRACE;
	v->a[21826] = actions(621);
	v->a[21827] = 1;
	v->a[21828] = anon_sym_DOLLAR_LPAREN;
	v->a[21829] = actions(624);
	v->a[21830] = 1;
	v->a[21831] = anon_sym_BQUOTE;
	v->a[21832] = actions(577);
	v->a[21833] = 2;
	v->a[21834] = sym_file_descriptor;
	v->a[21835] = sym_variable_name;
	v->a[21836] = state(203);
	v->a[21837] = 2;
	v->a[21838] = sym_concatenation;
	v->a[21839] = aux_sym_for_statement_repeat1;
	small_parse_table_1092(v);
}

void	small_parse_table_1092(t_small_parse_table_array *v)
{
	v->a[21840] = actions(606);
	v->a[21841] = 3;
	v->a[21842] = sym_raw_string;
	v->a[21843] = sym_number;
	v->a[21844] = sym_word;
	v->a[21845] = state(462);
	v->a[21846] = 5;
	v->a[21847] = sym_arithmetic_expansion;
	v->a[21848] = sym_string;
	v->a[21849] = sym_simple_expansion;
	v->a[21850] = sym_expansion;
	v->a[21851] = sym_command_substitution;
	v->a[21852] = actions(582);
	v->a[21853] = 18;
	v->a[21854] = anon_sym_esac;
	v->a[21855] = anon_sym_PIPE;
	v->a[21856] = anon_sym_SEMI_SEMI;
	v->a[21857] = anon_sym_AMP_AMP;
	v->a[21858] = anon_sym_PIPE_PIPE;
	v->a[21859] = anon_sym_LT;
	small_parse_table_1093(v);
}

void	small_parse_table_1093(t_small_parse_table_array *v)
{
	v->a[21860] = anon_sym_GT;
	v->a[21861] = anon_sym_GT_GT;
	v->a[21862] = anon_sym_LT_AMP;
	v->a[21863] = anon_sym_GT_AMP;
	v->a[21864] = anon_sym_GT_PIPE;
	v->a[21865] = anon_sym_LT_AMP_DASH;
	v->a[21866] = anon_sym_GT_AMP_DASH;
	v->a[21867] = anon_sym_LT_LT;
	v->a[21868] = anon_sym_LT_LT_DASH;
	v->a[21869] = aux_sym_heredoc_redirect_token1;
	v->a[21870] = anon_sym_AMP;
	v->a[21871] = anon_sym_SEMI;
	v->a[21872] = 14;
	v->a[21873] = actions(3);
	v->a[21874] = 1;
	v->a[21875] = sym_comment;
	v->a[21876] = actions(477);
	v->a[21877] = 1;
	v->a[21878] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21879] = actions(479);
	small_parse_table_1094(v);
}

void	small_parse_table_1094(t_small_parse_table_array *v)
{
	v->a[21880] = 1;
	v->a[21881] = anon_sym_DOLLAR;
	v->a[21882] = actions(481);
	v->a[21883] = 1;
	v->a[21884] = anon_sym_DQUOTE;
	v->a[21885] = actions(483);
	v->a[21886] = 1;
	v->a[21887] = anon_sym_DOLLAR_LBRACE;
	v->a[21888] = actions(485);
	v->a[21889] = 1;
	v->a[21890] = anon_sym_DOLLAR_LPAREN;
	v->a[21891] = actions(487);
	v->a[21892] = 1;
	v->a[21893] = anon_sym_BQUOTE;
	v->a[21894] = actions(489);
	v->a[21895] = 1;
	v->a[21896] = sym__bare_dollar;
	v->a[21897] = state(194);
	v->a[21898] = 1;
	v->a[21899] = aux_sym_command_repeat2;
	small_parse_table_1095(v);
}

/* EOF small_parse_table_218.c */
