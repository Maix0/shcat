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
	v->a[30800] = sym_command_substitution;
	v->a[30801] = 15;
	v->a[30802] = actions(3);
	v->a[30803] = 1;
	v->a[30804] = sym_comment;
	v->a[30805] = actions(778);
	v->a[30806] = 1;
	v->a[30807] = anon_sym_LPAREN;
	v->a[30808] = actions(782);
	v->a[30809] = 1;
	v->a[30810] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30811] = actions(784);
	v->a[30812] = 1;
	v->a[30813] = anon_sym_DOLLAR;
	v->a[30814] = actions(786);
	v->a[30815] = 1;
	v->a[30816] = anon_sym_DQUOTE;
	v->a[30817] = actions(788);
	v->a[30818] = 1;
	v->a[30819] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1541(v);
}

void	small_parse_table_1541(t_small_parse_table_array *v)
{
	v->a[30820] = actions(790);
	v->a[30821] = 1;
	v->a[30822] = anon_sym_DOLLAR_LPAREN;
	v->a[30823] = actions(792);
	v->a[30824] = 1;
	v->a[30825] = anon_sym_BQUOTE;
	v->a[30826] = actions(794);
	v->a[30827] = 1;
	v->a[30828] = sym_extglob_pattern;
	v->a[30829] = state(597);
	v->a[30830] = 1;
	v->a[30831] = aux_sym_case_statement_repeat1;
	v->a[30832] = state(1232);
	v->a[30833] = 1;
	v->a[30834] = sym_case_item;
	v->a[30835] = state(1621);
	v->a[30836] = 1;
	v->a[30837] = sym__case_item_last;
	v->a[30838] = state(1538);
	v->a[30839] = 2;
	small_parse_table_1542(v);
}

void	small_parse_table_1542(t_small_parse_table_array *v)
{
	v->a[30840] = sym_concatenation;
	v->a[30841] = sym__extglob_blob;
	v->a[30842] = actions(774);
	v->a[30843] = 3;
	v->a[30844] = sym_raw_string;
	v->a[30845] = sym_number;
	v->a[30846] = sym_word;
	v->a[30847] = state(1468);
	v->a[30848] = 5;
	v->a[30849] = sym_arithmetic_expansion;
	v->a[30850] = sym_string;
	v->a[30851] = sym_simple_expansion;
	v->a[30852] = sym_expansion;
	v->a[30853] = sym_command_substitution;
	v->a[30854] = 6;
	v->a[30855] = actions(3);
	v->a[30856] = 1;
	v->a[30857] = sym_comment;
	v->a[30858] = actions(878);
	v->a[30859] = 1;
	small_parse_table_1543(v);
}

void	small_parse_table_1543(t_small_parse_table_array *v)
{
	v->a[30860] = sym_variable_name;
	v->a[30861] = actions(927);
	v->a[30862] = 1;
	v->a[30863] = aux_sym_concatenation_token1;
	v->a[30864] = actions(1009);
	v->a[30865] = 1;
	v->a[30866] = sym__concat;
	v->a[30867] = state(569);
	v->a[30868] = 1;
	v->a[30869] = aux_sym_concatenation_repeat1;
	v->a[30870] = actions(880);
	v->a[30871] = 17;
	v->a[30872] = anon_sym_PIPE;
	v->a[30873] = anon_sym_AMP_AMP;
	v->a[30874] = anon_sym_PIPE_PIPE;
	v->a[30875] = anon_sym_LT;
	v->a[30876] = anon_sym_GT;
	v->a[30877] = anon_sym_GT_GT;
	v->a[30878] = anon_sym_LT_LT;
	v->a[30879] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1544(v);
}

void	small_parse_table_1544(t_small_parse_table_array *v)
{
	v->a[30880] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30881] = anon_sym_DOLLAR;
	v->a[30882] = anon_sym_DQUOTE;
	v->a[30883] = sym_raw_string;
	v->a[30884] = sym_number;
	v->a[30885] = anon_sym_DOLLAR_LBRACE;
	v->a[30886] = anon_sym_DOLLAR_LPAREN;
	v->a[30887] = anon_sym_BQUOTE;
	v->a[30888] = sym_word;
	v->a[30889] = 6;
	v->a[30890] = actions(3);
	v->a[30891] = 1;
	v->a[30892] = sym_comment;
	v->a[30893] = actions(1257);
	v->a[30894] = 1;
	v->a[30895] = sym_variable_name;
	v->a[30896] = actions(1280);
	v->a[30897] = 1;
	v->a[30898] = anon_sym_RPAREN;
	v->a[30899] = actions(1254);
	small_parse_table_1545(v);
}

/* EOF small_parse_table_308.c */
