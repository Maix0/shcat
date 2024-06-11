/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_338.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1690(t_small_parse_table_array *v)
{
	v->a[33800] = actions(121);
	v->a[33801] = 1;
	v->a[33802] = anon_sym_BQUOTE;
	v->a[33803] = actions(125);
	v->a[33804] = 1;
	v->a[33805] = sym_variable_name;
	v->a[33806] = actions(1201);
	v->a[33807] = 1;
	v->a[33808] = sym_file_descriptor;
	v->a[33809] = state(182);
	v->a[33810] = 1;
	v->a[33811] = sym_command_name;
	v->a[33812] = state(621);
	v->a[33813] = 1;
	v->a[33814] = sym_concatenation;
	v->a[33815] = state(693);
	v->a[33816] = 1;
	v->a[33817] = sym_variable_assignment;
	v->a[33818] = state(810);
	v->a[33819] = 1;
	small_parse_table_1691(v);
}

void	small_parse_table_1691(t_small_parse_table_array *v)
{
	v->a[33820] = aux_sym_command_repeat1;
	v->a[33821] = state(1477);
	v->a[33822] = 1;
	v->a[33823] = sym_file_redirect;
	v->a[33824] = state(1517);
	v->a[33825] = 1;
	v->a[33826] = sym_subshell;
	v->a[33827] = state(1524);
	v->a[33828] = 1;
	v->a[33829] = sym_command;
	v->a[33830] = actions(1199);
	v->a[33831] = 2;
	v->a[33832] = anon_sym_LT_AMP_DASH;
	v->a[33833] = anon_sym_GT_AMP_DASH;
	v->a[33834] = actions(115);
	v->a[33835] = 3;
	v->a[33836] = sym_raw_string;
	v->a[33837] = sym_number;
	v->a[33838] = sym_word;
	v->a[33839] = state(282);
	small_parse_table_1692(v);
}

void	small_parse_table_1692(t_small_parse_table_array *v)
{
	v->a[33840] = 5;
	v->a[33841] = sym_arithmetic_expansion;
	v->a[33842] = sym_string;
	v->a[33843] = sym_simple_expansion;
	v->a[33844] = sym_expansion;
	v->a[33845] = sym_command_substitution;
	v->a[33846] = actions(1197);
	v->a[33847] = 8;
	v->a[33848] = anon_sym_LT;
	v->a[33849] = anon_sym_GT;
	v->a[33850] = anon_sym_GT_GT;
	v->a[33851] = anon_sym_AMP_GT;
	v->a[33852] = anon_sym_AMP_GT_GT;
	v->a[33853] = anon_sym_LT_AMP;
	v->a[33854] = anon_sym_GT_AMP;
	v->a[33855] = anon_sym_GT_PIPE;
	v->a[33856] = 6;
	v->a[33857] = actions(3);
	v->a[33858] = 1;
	v->a[33859] = sym_comment;
	small_parse_table_1693(v);
}

void	small_parse_table_1693(t_small_parse_table_array *v)
{
	v->a[33860] = actions(1207);
	v->a[33861] = 1;
	v->a[33862] = aux_sym_concatenation_token1;
	v->a[33863] = actions(1284);
	v->a[33864] = 1;
	v->a[33865] = sym__concat;
	v->a[33866] = state(411);
	v->a[33867] = 1;
	v->a[33868] = aux_sym_concatenation_repeat1;
	v->a[33869] = actions(972);
	v->a[33870] = 2;
	v->a[33871] = sym_file_descriptor;
	v->a[33872] = sym__bare_dollar;
	v->a[33873] = actions(974);
	v->a[33874] = 29;
	v->a[33875] = anon_sym_esac;
	v->a[33876] = anon_sym_PIPE;
	v->a[33877] = anon_sym_SEMI_SEMI;
	v->a[33878] = anon_sym_AMP_AMP;
	v->a[33879] = anon_sym_PIPE_PIPE;
	small_parse_table_1694(v);
}

void	small_parse_table_1694(t_small_parse_table_array *v)
{
	v->a[33880] = anon_sym_LT;
	v->a[33881] = anon_sym_GT;
	v->a[33882] = anon_sym_GT_GT;
	v->a[33883] = anon_sym_AMP_GT;
	v->a[33884] = anon_sym_AMP_GT_GT;
	v->a[33885] = anon_sym_LT_AMP;
	v->a[33886] = anon_sym_GT_AMP;
	v->a[33887] = anon_sym_GT_PIPE;
	v->a[33888] = anon_sym_LT_AMP_DASH;
	v->a[33889] = anon_sym_GT_AMP_DASH;
	v->a[33890] = anon_sym_LT_LT;
	v->a[33891] = anon_sym_LT_LT_DASH;
	v->a[33892] = aux_sym_heredoc_redirect_token1;
	v->a[33893] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33894] = anon_sym_AMP;
	v->a[33895] = anon_sym_DOLLAR;
	v->a[33896] = anon_sym_DQUOTE;
	v->a[33897] = sym_raw_string;
	v->a[33898] = sym_number;
	v->a[33899] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1695(v);
}

/* EOF small_parse_table_338.c */
