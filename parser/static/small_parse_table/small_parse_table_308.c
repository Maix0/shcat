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
	v->a[30800] = anon_sym_GT_GT;
	v->a[30801] = anon_sym_AMP_GT;
	v->a[30802] = anon_sym_AMP_GT_GT;
	v->a[30803] = anon_sym_LT_AMP;
	v->a[30804] = anon_sym_GT_AMP;
	v->a[30805] = anon_sym_GT_PIPE;
	v->a[30806] = anon_sym_LT_AMP_DASH;
	v->a[30807] = anon_sym_GT_AMP_DASH;
	v->a[30808] = anon_sym_LT_LT;
	v->a[30809] = anon_sym_LT_LT_DASH;
	v->a[30810] = aux_sym_heredoc_redirect_token1;
	v->a[30811] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30812] = anon_sym_AMP;
	v->a[30813] = anon_sym_DOLLAR;
	v->a[30814] = anon_sym_DQUOTE;
	v->a[30815] = sym_raw_string;
	v->a[30816] = aux_sym_number_token1;
	v->a[30817] = aux_sym_number_token2;
	v->a[30818] = anon_sym_DOLLAR_LBRACE;
	v->a[30819] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1541(v);
}

void	small_parse_table_1541(t_small_parse_table_array *v)
{
	v->a[30820] = anon_sym_BQUOTE;
	v->a[30821] = sym_word;
	v->a[30822] = anon_sym_SEMI;
	v->a[30823] = 7;
	v->a[30824] = actions(3);
	v->a[30825] = 1;
	v->a[30826] = sym_comment;
	v->a[30827] = actions(1159);
	v->a[30828] = 1;
	v->a[30829] = aux_sym_concatenation_token1;
	v->a[30830] = actions(1161);
	v->a[30831] = 1;
	v->a[30832] = sym__concat;
	v->a[30833] = actions(1214);
	v->a[30834] = 1;
	v->a[30835] = anon_sym_LPAREN;
	v->a[30836] = state(382);
	v->a[30837] = 1;
	v->a[30838] = aux_sym_concatenation_repeat1;
	v->a[30839] = actions(1108);
	small_parse_table_1542(v);
}

void	small_parse_table_1542(t_small_parse_table_array *v)
{
	v->a[30840] = 2;
	v->a[30841] = sym_file_descriptor;
	v->a[30842] = sym__bare_dollar;
	v->a[30843] = actions(1104);
	v->a[30844] = 29;
	v->a[30845] = anon_sym_PIPE;
	v->a[30846] = anon_sym_SEMI_SEMI;
	v->a[30847] = anon_sym_AMP_AMP;
	v->a[30848] = anon_sym_PIPE_PIPE;
	v->a[30849] = anon_sym_LT;
	v->a[30850] = anon_sym_GT;
	v->a[30851] = anon_sym_GT_GT;
	v->a[30852] = anon_sym_AMP_GT;
	v->a[30853] = anon_sym_AMP_GT_GT;
	v->a[30854] = anon_sym_LT_AMP;
	v->a[30855] = anon_sym_GT_AMP;
	v->a[30856] = anon_sym_GT_PIPE;
	v->a[30857] = anon_sym_LT_AMP_DASH;
	v->a[30858] = anon_sym_GT_AMP_DASH;
	v->a[30859] = anon_sym_LT_LT;
	small_parse_table_1543(v);
}

void	small_parse_table_1543(t_small_parse_table_array *v)
{
	v->a[30860] = anon_sym_LT_LT_DASH;
	v->a[30861] = aux_sym_heredoc_redirect_token1;
	v->a[30862] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30863] = anon_sym_AMP;
	v->a[30864] = anon_sym_DOLLAR;
	v->a[30865] = anon_sym_DQUOTE;
	v->a[30866] = sym_raw_string;
	v->a[30867] = aux_sym_number_token1;
	v->a[30868] = aux_sym_number_token2;
	v->a[30869] = anon_sym_DOLLAR_LBRACE;
	v->a[30870] = anon_sym_DOLLAR_LPAREN;
	v->a[30871] = anon_sym_BQUOTE;
	v->a[30872] = sym_word;
	v->a[30873] = anon_sym_SEMI;
	v->a[30874] = 6;
	v->a[30875] = actions(3);
	v->a[30876] = 1;
	v->a[30877] = sym_comment;
	v->a[30878] = actions(413);
	v->a[30879] = 1;
	small_parse_table_1544(v);
}

void	small_parse_table_1544(t_small_parse_table_array *v)
{
	v->a[30880] = sym_file_descriptor;
	v->a[30881] = actions(1221);
	v->a[30882] = 1;
	v->a[30883] = sym_variable_name;
	v->a[30884] = actions(1219);
	v->a[30885] = 2;
	v->a[30886] = aux_sym__simple_variable_name_token1;
	v->a[30887] = aux_sym__multiline_variable_name_token1;
	v->a[30888] = actions(1217);
	v->a[30889] = 9;
	v->a[30890] = anon_sym_BANG;
	v->a[30891] = anon_sym_DASH;
	v->a[30892] = anon_sym_STAR;
	v->a[30893] = anon_sym_QMARK;
	v->a[30894] = anon_sym_DOLLAR;
	v->a[30895] = anon_sym_POUND;
	v->a[30896] = anon_sym_AT;
	v->a[30897] = anon_sym_0;
	v->a[30898] = anon_sym__;
	v->a[30899] = actions(407);
	small_parse_table_1545(v);
}

/* EOF small_parse_table_308.c */
