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
	v->a[30800] = 1;
	v->a[30801] = sym_variable_name;
	v->a[30802] = actions(1205);
	v->a[30803] = 2;
	v->a[30804] = aux_sym__simple_variable_name_token1;
	v->a[30805] = aux_sym__multiline_variable_name_token1;
	v->a[30806] = actions(1203);
	v->a[30807] = 9;
	v->a[30808] = anon_sym_BANG;
	v->a[30809] = anon_sym_DASH;
	v->a[30810] = anon_sym_STAR;
	v->a[30811] = anon_sym_QMARK;
	v->a[30812] = anon_sym_DOLLAR;
	v->a[30813] = anon_sym_POUND;
	v->a[30814] = anon_sym_AT;
	v->a[30815] = anon_sym_0;
	v->a[30816] = anon_sym__;
	v->a[30817] = actions(379);
	v->a[30818] = 21;
	v->a[30819] = anon_sym_AMP_AMP;
	small_parse_table_1541(v);
}

void	small_parse_table_1541(t_small_parse_table_array *v)
{
	v->a[30820] = anon_sym_PIPE_PIPE;
	v->a[30821] = anon_sym_LT;
	v->a[30822] = anon_sym_GT;
	v->a[30823] = anon_sym_GT_GT;
	v->a[30824] = anon_sym_AMP_GT;
	v->a[30825] = anon_sym_AMP_GT_GT;
	v->a[30826] = anon_sym_LT_AMP;
	v->a[30827] = anon_sym_GT_AMP;
	v->a[30828] = anon_sym_GT_PIPE;
	v->a[30829] = anon_sym_LT_AMP_DASH;
	v->a[30830] = anon_sym_GT_AMP_DASH;
	v->a[30831] = aux_sym_heredoc_redirect_token1;
	v->a[30832] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30833] = anon_sym_DQUOTE;
	v->a[30834] = sym_raw_string;
	v->a[30835] = sym_number;
	v->a[30836] = anon_sym_DOLLAR_LBRACE;
	v->a[30837] = anon_sym_DOLLAR_LPAREN;
	v->a[30838] = anon_sym_BQUOTE;
	v->a[30839] = sym_word;
	small_parse_table_1542(v);
}

void	small_parse_table_1542(t_small_parse_table_array *v)
{
	v->a[30840] = 3;
	v->a[30841] = actions(3);
	v->a[30842] = 1;
	v->a[30843] = sym_comment;
	v->a[30844] = actions(1088);
	v->a[30845] = 3;
	v->a[30846] = sym_file_descriptor;
	v->a[30847] = sym__concat;
	v->a[30848] = sym__bare_dollar;
	v->a[30849] = actions(1086);
	v->a[30850] = 31;
	v->a[30851] = anon_sym_esac;
	v->a[30852] = anon_sym_LPAREN;
	v->a[30853] = anon_sym_PIPE;
	v->a[30854] = anon_sym_SEMI_SEMI;
	v->a[30855] = anon_sym_AMP_AMP;
	v->a[30856] = anon_sym_PIPE_PIPE;
	v->a[30857] = anon_sym_LT;
	v->a[30858] = anon_sym_GT;
	v->a[30859] = anon_sym_GT_GT;
	small_parse_table_1543(v);
}

void	small_parse_table_1543(t_small_parse_table_array *v)
{
	v->a[30860] = anon_sym_AMP_GT;
	v->a[30861] = anon_sym_AMP_GT_GT;
	v->a[30862] = anon_sym_LT_AMP;
	v->a[30863] = anon_sym_GT_AMP;
	v->a[30864] = anon_sym_GT_PIPE;
	v->a[30865] = anon_sym_LT_AMP_DASH;
	v->a[30866] = anon_sym_GT_AMP_DASH;
	v->a[30867] = anon_sym_LT_LT;
	v->a[30868] = anon_sym_LT_LT_DASH;
	v->a[30869] = aux_sym_heredoc_redirect_token1;
	v->a[30870] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30871] = anon_sym_AMP;
	v->a[30872] = aux_sym_concatenation_token1;
	v->a[30873] = anon_sym_DOLLAR;
	v->a[30874] = anon_sym_DQUOTE;
	v->a[30875] = sym_raw_string;
	v->a[30876] = sym_number;
	v->a[30877] = anon_sym_DOLLAR_LBRACE;
	v->a[30878] = anon_sym_DOLLAR_LPAREN;
	v->a[30879] = anon_sym_BQUOTE;
	small_parse_table_1544(v);
}

void	small_parse_table_1544(t_small_parse_table_array *v)
{
	v->a[30880] = sym_word;
	v->a[30881] = anon_sym_SEMI;
	v->a[30882] = 3;
	v->a[30883] = actions(1074);
	v->a[30884] = 1;
	v->a[30885] = sym_comment;
	v->a[30886] = actions(1209);
	v->a[30887] = 13;
	v->a[30888] = anon_sym_PIPE;
	v->a[30889] = anon_sym_EQ;
	v->a[30890] = anon_sym_LT;
	v->a[30891] = anon_sym_GT;
	v->a[30892] = anon_sym_GT_GT;
	v->a[30893] = anon_sym_LT_LT;
	v->a[30894] = anon_sym_CARET;
	v->a[30895] = anon_sym_AMP;
	v->a[30896] = anon_sym_PLUS;
	v->a[30897] = anon_sym_DASH;
	v->a[30898] = anon_sym_STAR;
	v->a[30899] = anon_sym_SLASH;
	small_parse_table_1545(v);
}

/* EOF small_parse_table_308.c */
