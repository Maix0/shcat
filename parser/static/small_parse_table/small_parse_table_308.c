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
	v->a[30800] = anon_sym_LPAREN;
	v->a[30801] = anon_sym_PIPE;
	v->a[30802] = anon_sym_RPAREN;
	v->a[30803] = anon_sym_SEMI_SEMI;
	v->a[30804] = anon_sym_AMP_AMP;
	v->a[30805] = anon_sym_PIPE_PIPE;
	v->a[30806] = anon_sym_LT;
	v->a[30807] = anon_sym_GT;
	v->a[30808] = anon_sym_GT_GT;
	v->a[30809] = anon_sym_LT_AMP;
	v->a[30810] = anon_sym_GT_AMP;
	v->a[30811] = anon_sym_GT_PIPE;
	v->a[30812] = anon_sym_LT_GT;
	v->a[30813] = anon_sym_LT_LT;
	v->a[30814] = anon_sym_LT_LT_DASH;
	v->a[30815] = aux_sym_heredoc_redirect_token1;
	v->a[30816] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30817] = aux_sym_concatenation_token1;
	v->a[30818] = anon_sym_DOLLAR;
	v->a[30819] = anon_sym_DQUOTE;
	small_parse_table_1541(v);
}

void	small_parse_table_1541(t_small_parse_table_array *v)
{
	v->a[30820] = sym_raw_string;
	v->a[30821] = sym_number;
	v->a[30822] = anon_sym_DOLLAR_LBRACE;
	v->a[30823] = anon_sym_DOLLAR_LPAREN;
	v->a[30824] = anon_sym_BQUOTE;
	v->a[30825] = sym_word;
	v->a[30826] = anon_sym_SEMI;
	v->a[30827] = 6;
	v->a[30828] = actions(3);
	v->a[30829] = 1;
	v->a[30830] = sym_comment;
	v->a[30831] = actions(1164);
	v->a[30832] = 1;
	v->a[30833] = aux_sym_concatenation_token1;
	v->a[30834] = actions(1167);
	v->a[30835] = 1;
	v->a[30836] = sym__concat;
	v->a[30837] = state(383);
	v->a[30838] = 1;
	v->a[30839] = aux_sym_concatenation_repeat1;
	small_parse_table_1542(v);
}

void	small_parse_table_1542(t_small_parse_table_array *v)
{
	v->a[30840] = actions(1110);
	v->a[30841] = 3;
	v->a[30842] = sym_file_descriptor;
	v->a[30843] = sym__bare_dollar;
	v->a[30844] = ts_builtin_sym_end;
	v->a[30845] = actions(1105);
	v->a[30846] = 24;
	v->a[30847] = anon_sym_PIPE;
	v->a[30848] = anon_sym_SEMI_SEMI;
	v->a[30849] = anon_sym_AMP_AMP;
	v->a[30850] = anon_sym_PIPE_PIPE;
	v->a[30851] = anon_sym_LT;
	v->a[30852] = anon_sym_GT;
	v->a[30853] = anon_sym_GT_GT;
	v->a[30854] = anon_sym_LT_AMP;
	v->a[30855] = anon_sym_GT_AMP;
	v->a[30856] = anon_sym_GT_PIPE;
	v->a[30857] = anon_sym_LT_GT;
	v->a[30858] = anon_sym_LT_LT;
	v->a[30859] = anon_sym_LT_LT_DASH;
	small_parse_table_1543(v);
}

void	small_parse_table_1543(t_small_parse_table_array *v)
{
	v->a[30860] = aux_sym_heredoc_redirect_token1;
	v->a[30861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30862] = anon_sym_DOLLAR;
	v->a[30863] = anon_sym_DQUOTE;
	v->a[30864] = sym_raw_string;
	v->a[30865] = sym_number;
	v->a[30866] = anon_sym_DOLLAR_LBRACE;
	v->a[30867] = anon_sym_DOLLAR_LPAREN;
	v->a[30868] = anon_sym_BQUOTE;
	v->a[30869] = sym_word;
	v->a[30870] = anon_sym_SEMI;
	v->a[30871] = 6;
	v->a[30872] = actions(3);
	v->a[30873] = 1;
	v->a[30874] = sym_comment;
	v->a[30875] = actions(1170);
	v->a[30876] = 1;
	v->a[30877] = aux_sym_concatenation_token1;
	v->a[30878] = actions(1173);
	v->a[30879] = 1;
	small_parse_table_1544(v);
}

void	small_parse_table_1544(t_small_parse_table_array *v)
{
	v->a[30880] = sym__concat;
	v->a[30881] = state(384);
	v->a[30882] = 1;
	v->a[30883] = aux_sym_concatenation_repeat1;
	v->a[30884] = actions(1110);
	v->a[30885] = 2;
	v->a[30886] = sym_file_descriptor;
	v->a[30887] = sym__bare_dollar;
	v->a[30888] = actions(1105);
	v->a[30889] = 25;
	v->a[30890] = anon_sym_PIPE;
	v->a[30891] = anon_sym_RPAREN;
	v->a[30892] = anon_sym_SEMI_SEMI;
	v->a[30893] = anon_sym_AMP_AMP;
	v->a[30894] = anon_sym_PIPE_PIPE;
	v->a[30895] = anon_sym_LT;
	v->a[30896] = anon_sym_GT;
	v->a[30897] = anon_sym_GT_GT;
	v->a[30898] = anon_sym_LT_AMP;
	v->a[30899] = anon_sym_GT_AMP;
	small_parse_table_1545(v);
}

/* EOF small_parse_table_308.c */
