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
	v->a[30800] = anon_sym_DQUOTE;
	v->a[30801] = sym_raw_string;
	v->a[30802] = sym_number;
	v->a[30803] = anon_sym_DOLLAR_LBRACE;
	v->a[30804] = anon_sym_DOLLAR_LPAREN;
	v->a[30805] = anon_sym_BQUOTE;
	v->a[30806] = sym_word;
	v->a[30807] = anon_sym_SEMI;
	v->a[30808] = 6;
	v->a[30809] = actions(3);
	v->a[30810] = 1;
	v->a[30811] = sym_comment;
	v->a[30812] = actions(1182);
	v->a[30813] = 1;
	v->a[30814] = aux_sym_concatenation_token1;
	v->a[30815] = actions(1184);
	v->a[30816] = 1;
	v->a[30817] = sym__concat;
	v->a[30818] = state(439);
	v->a[30819] = 1;
	small_parse_table_1541(v);
}

void	small_parse_table_1541(t_small_parse_table_array *v)
{
	v->a[30820] = aux_sym_concatenation_repeat1;
	v->a[30821] = actions(1043);
	v->a[30822] = 2;
	v->a[30823] = sym_file_descriptor;
	v->a[30824] = sym__bare_dollar;
	v->a[30825] = actions(1045);
	v->a[30826] = 26;
	v->a[30827] = anon_sym_PIPE;
	v->a[30828] = anon_sym_RPAREN;
	v->a[30829] = anon_sym_SEMI_SEMI;
	v->a[30830] = anon_sym_AMP_AMP;
	v->a[30831] = anon_sym_PIPE_PIPE;
	v->a[30832] = anon_sym_LT;
	v->a[30833] = anon_sym_GT;
	v->a[30834] = anon_sym_GT_GT;
	v->a[30835] = anon_sym_LT_AMP;
	v->a[30836] = anon_sym_GT_AMP;
	v->a[30837] = anon_sym_GT_PIPE;
	v->a[30838] = anon_sym_LT_GT;
	v->a[30839] = anon_sym_LT_LT;
	small_parse_table_1542(v);
}

void	small_parse_table_1542(t_small_parse_table_array *v)
{
	v->a[30840] = anon_sym_LT_LT_DASH;
	v->a[30841] = aux_sym_heredoc_redirect_token1;
	v->a[30842] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30843] = anon_sym_AMP;
	v->a[30844] = anon_sym_DOLLAR;
	v->a[30845] = anon_sym_DQUOTE;
	v->a[30846] = sym_raw_string;
	v->a[30847] = sym_number;
	v->a[30848] = anon_sym_DOLLAR_LBRACE;
	v->a[30849] = anon_sym_DOLLAR_LPAREN;
	v->a[30850] = anon_sym_BQUOTE;
	v->a[30851] = sym_word;
	v->a[30852] = anon_sym_SEMI;
	v->a[30853] = 6;
	v->a[30854] = actions(3);
	v->a[30855] = 1;
	v->a[30856] = sym_comment;
	v->a[30857] = actions(1186);
	v->a[30858] = 1;
	v->a[30859] = aux_sym_concatenation_token1;
	small_parse_table_1543(v);
}

void	small_parse_table_1543(t_small_parse_table_array *v)
{
	v->a[30860] = actions(1189);
	v->a[30861] = 1;
	v->a[30862] = sym__concat;
	v->a[30863] = state(387);
	v->a[30864] = 1;
	v->a[30865] = aux_sym_concatenation_repeat1;
	v->a[30866] = actions(1092);
	v->a[30867] = 2;
	v->a[30868] = sym_file_descriptor;
	v->a[30869] = sym_variable_name;
	v->a[30870] = actions(1094);
	v->a[30871] = 26;
	v->a[30872] = anon_sym_esac;
	v->a[30873] = anon_sym_PIPE;
	v->a[30874] = anon_sym_SEMI_SEMI;
	v->a[30875] = anon_sym_AMP_AMP;
	v->a[30876] = anon_sym_PIPE_PIPE;
	v->a[30877] = anon_sym_LT;
	v->a[30878] = anon_sym_GT;
	v->a[30879] = anon_sym_GT_GT;
	small_parse_table_1544(v);
}

void	small_parse_table_1544(t_small_parse_table_array *v)
{
	v->a[30880] = anon_sym_LT_AMP;
	v->a[30881] = anon_sym_GT_AMP;
	v->a[30882] = anon_sym_GT_PIPE;
	v->a[30883] = anon_sym_LT_GT;
	v->a[30884] = anon_sym_LT_LT;
	v->a[30885] = anon_sym_LT_LT_DASH;
	v->a[30886] = aux_sym_heredoc_redirect_token1;
	v->a[30887] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30888] = anon_sym_AMP;
	v->a[30889] = anon_sym_DOLLAR;
	v->a[30890] = anon_sym_DQUOTE;
	v->a[30891] = sym_raw_string;
	v->a[30892] = sym_number;
	v->a[30893] = anon_sym_DOLLAR_LBRACE;
	v->a[30894] = anon_sym_DOLLAR_LPAREN;
	v->a[30895] = anon_sym_BQUOTE;
	v->a[30896] = sym_word;
	v->a[30897] = anon_sym_SEMI;
	v->a[30898] = 6;
	v->a[30899] = actions(3);
	small_parse_table_1545(v);
}

/* EOF small_parse_table_308.c */
