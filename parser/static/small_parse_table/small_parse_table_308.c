/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_308.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1540(t_small_parse_table_array *v)
{
	v->a[30800] = state(626);
	v->a[30801] = 1;
	v->a[30802] = aux_sym_command_repeat1;
	v->a[30803] = state(890);
	v->a[30804] = 1;
	v->a[30805] = sym_concatenation;
	v->a[30806] = state(905);
	v->a[30807] = 1;
	v->a[30808] = sym_variable_assignment;
	v->a[30809] = state(1225);
	v->a[30810] = 1;
	v->a[30811] = sym_file_redirect;
	v->a[30812] = state(1597);
	v->a[30813] = 1;
	v->a[30814] = sym_subshell;
	v->a[30815] = state(1598);
	v->a[30816] = 1;
	v->a[30817] = sym_command;
	v->a[30818] = actions(335);
	v->a[30819] = 3;
	small_parse_table_1541(v);
}

void	small_parse_table_1541(t_small_parse_table_array *v)
{
	v->a[30820] = sym_raw_string;
	v->a[30821] = sym_number;
	v->a[30822] = sym_word;
	v->a[30823] = state(760);
	v->a[30824] = 5;
	v->a[30825] = sym_arithmetic_expansion;
	v->a[30826] = sym_string;
	v->a[30827] = sym_simple_expansion;
	v->a[30828] = sym_expansion;
	v->a[30829] = sym_command_substitution;
	v->a[30830] = actions(1150);
	v->a[30831] = 7;
	v->a[30832] = anon_sym_LT;
	v->a[30833] = anon_sym_GT;
	v->a[30834] = anon_sym_GT_GT;
	v->a[30835] = anon_sym_LT_AMP;
	v->a[30836] = anon_sym_GT_AMP;
	v->a[30837] = anon_sym_GT_PIPE;
	v->a[30838] = anon_sym_LT_GT;
	v->a[30839] = 3;
	small_parse_table_1542(v);
}

void	small_parse_table_1542(t_small_parse_table_array *v)
{
	v->a[30840] = actions(3);
	v->a[30841] = 1;
	v->a[30842] = sym_comment;
	v->a[30843] = actions(1093);
	v->a[30844] = 4;
	v->a[30845] = sym_file_descriptor;
	v->a[30846] = sym__concat;
	v->a[30847] = sym__bare_dollar;
	v->a[30848] = ts_builtin_sym_end;
	v->a[30849] = actions(1088);
	v->a[30850] = 27;
	v->a[30851] = anon_sym_LPAREN;
	v->a[30852] = anon_sym_PIPE;
	v->a[30853] = anon_sym_SEMI_SEMI;
	v->a[30854] = anon_sym_AMP_AMP;
	v->a[30855] = anon_sym_PIPE_PIPE;
	v->a[30856] = anon_sym_LT;
	v->a[30857] = anon_sym_GT;
	v->a[30858] = anon_sym_GT_GT;
	v->a[30859] = anon_sym_LT_AMP;
	small_parse_table_1543(v);
}

void	small_parse_table_1543(t_small_parse_table_array *v)
{
	v->a[30860] = anon_sym_GT_AMP;
	v->a[30861] = anon_sym_GT_PIPE;
	v->a[30862] = anon_sym_LT_GT;
	v->a[30863] = anon_sym_LT_LT;
	v->a[30864] = anon_sym_LT_LT_DASH;
	v->a[30865] = aux_sym_heredoc_redirect_token1;
	v->a[30866] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30867] = anon_sym_AMP;
	v->a[30868] = aux_sym_concatenation_token1;
	v->a[30869] = anon_sym_DOLLAR;
	v->a[30870] = anon_sym_DQUOTE;
	v->a[30871] = sym_raw_string;
	v->a[30872] = sym_number;
	v->a[30873] = anon_sym_DOLLAR_LBRACE;
	v->a[30874] = anon_sym_DOLLAR_LPAREN;
	v->a[30875] = anon_sym_BQUOTE;
	v->a[30876] = sym_word;
	v->a[30877] = anon_sym_SEMI;
	v->a[30878] = 6;
	v->a[30879] = actions(3);
	small_parse_table_1544(v);
}

void	small_parse_table_1544(t_small_parse_table_array *v)
{
	v->a[30880] = 1;
	v->a[30881] = sym_comment;
	v->a[30882] = actions(1170);
	v->a[30883] = 1;
	v->a[30884] = aux_sym_concatenation_token1;
	v->a[30885] = actions(1174);
	v->a[30886] = 1;
	v->a[30887] = sym__concat;
	v->a[30888] = state(418);
	v->a[30889] = 1;
	v->a[30890] = aux_sym_concatenation_repeat1;
	v->a[30891] = actions(1172);
	v->a[30892] = 2;
	v->a[30893] = sym_file_descriptor;
	v->a[30894] = sym_variable_name;
	v->a[30895] = actions(1168);
	v->a[30896] = 26;
	v->a[30897] = anon_sym_PIPE;
	v->a[30898] = anon_sym_RPAREN;
	v->a[30899] = anon_sym_SEMI_SEMI;
	small_parse_table_1545(v);
}

/* EOF small_parse_table_308.c */
