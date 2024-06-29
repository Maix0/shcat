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
	v->a[33800] = 6;
	v->a[33801] = actions(3);
	v->a[33802] = 1;
	v->a[33803] = sym_comment;
	v->a[33804] = actions(959);
	v->a[33805] = 1;
	v->a[33806] = aux_sym_concatenation_token1;
	v->a[33807] = actions(1027);
	v->a[33808] = 1;
	v->a[33809] = sym__concat;
	v->a[33810] = state(400);
	v->a[33811] = 1;
	v->a[33812] = aux_sym_concatenation_repeat1;
	v->a[33813] = actions(1000);
	v->a[33814] = 2;
	v->a[33815] = sym_file_descriptor;
	v->a[33816] = sym__bare_dollar;
	v->a[33817] = actions(993);
	v->a[33818] = 29;
	v->a[33819] = anon_sym_LPAREN;
	small_parse_table_1691(v);
}

void	small_parse_table_1691(t_small_parse_table_array *v)
{
	v->a[33820] = anon_sym_PIPE;
	v->a[33821] = anon_sym_SEMI_SEMI;
	v->a[33822] = anon_sym_AMP_AMP;
	v->a[33823] = anon_sym_PIPE_PIPE;
	v->a[33824] = anon_sym_LT;
	v->a[33825] = anon_sym_GT;
	v->a[33826] = anon_sym_GT_GT;
	v->a[33827] = anon_sym_AMP_GT;
	v->a[33828] = anon_sym_AMP_GT_GT;
	v->a[33829] = anon_sym_LT_AMP;
	v->a[33830] = anon_sym_GT_AMP;
	v->a[33831] = anon_sym_GT_PIPE;
	v->a[33832] = anon_sym_LT_AMP_DASH;
	v->a[33833] = anon_sym_GT_AMP_DASH;
	v->a[33834] = anon_sym_LT_LT;
	v->a[33835] = anon_sym_LT_LT_DASH;
	v->a[33836] = aux_sym_heredoc_redirect_token1;
	v->a[33837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33838] = anon_sym_AMP;
	v->a[33839] = anon_sym_DOLLAR;
	small_parse_table_1692(v);
}

void	small_parse_table_1692(t_small_parse_table_array *v)
{
	v->a[33840] = anon_sym_DQUOTE;
	v->a[33841] = sym_raw_string;
	v->a[33842] = sym_number;
	v->a[33843] = anon_sym_DOLLAR_LBRACE;
	v->a[33844] = anon_sym_DOLLAR_LPAREN;
	v->a[33845] = anon_sym_BQUOTE;
	v->a[33846] = sym_word;
	v->a[33847] = anon_sym_SEMI;
	v->a[33848] = 21;
	v->a[33849] = actions(3);
	v->a[33850] = 1;
	v->a[33851] = sym_comment;
	v->a[33852] = actions(335);
	v->a[33853] = 1;
	v->a[33854] = anon_sym_LPAREN;
	v->a[33855] = actions(345);
	v->a[33856] = 1;
	v->a[33857] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33858] = actions(347);
	v->a[33859] = 1;
	small_parse_table_1693(v);
}

void	small_parse_table_1693(t_small_parse_table_array *v)
{
	v->a[33860] = anon_sym_DOLLAR;
	v->a[33861] = actions(349);
	v->a[33862] = 1;
	v->a[33863] = anon_sym_DQUOTE;
	v->a[33864] = actions(353);
	v->a[33865] = 1;
	v->a[33866] = anon_sym_DOLLAR_LBRACE;
	v->a[33867] = actions(355);
	v->a[33868] = 1;
	v->a[33869] = anon_sym_DOLLAR_LPAREN;
	v->a[33870] = actions(357);
	v->a[33871] = 1;
	v->a[33872] = anon_sym_BQUOTE;
	v->a[33873] = actions(361);
	v->a[33874] = 1;
	v->a[33875] = sym_variable_name;
	v->a[33876] = actions(1068);
	v->a[33877] = 1;
	v->a[33878] = sym_file_descriptor;
	v->a[33879] = state(287);
	small_parse_table_1694(v);
}

void	small_parse_table_1694(t_small_parse_table_array *v)
{
	v->a[33880] = 1;
	v->a[33881] = sym_command_name;
	v->a[33882] = state(732);
	v->a[33883] = 1;
	v->a[33884] = aux_sym_command_repeat1;
	v->a[33885] = state(928);
	v->a[33886] = 1;
	v->a[33887] = sym_concatenation;
	v->a[33888] = state(956);
	v->a[33889] = 1;
	v->a[33890] = sym_variable_assignment;
	v->a[33891] = state(1343);
	v->a[33892] = 1;
	v->a[33893] = sym_file_redirect;
	v->a[33894] = state(1606);
	v->a[33895] = 1;
	v->a[33896] = sym_subshell;
	v->a[33897] = state(1607);
	v->a[33898] = 1;
	v->a[33899] = sym_command;
	small_parse_table_1695(v);
}

/* EOF small_parse_table_338.c */
