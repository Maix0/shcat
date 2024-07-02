/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_318.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1590(t_small_parse_table_array *v)
{
	v->a[31800] = anon_sym_GT;
	v->a[31801] = anon_sym_GT_GT;
	v->a[31802] = anon_sym_LT_AMP;
	v->a[31803] = anon_sym_GT_AMP;
	v->a[31804] = anon_sym_GT_PIPE;
	v->a[31805] = anon_sym_LT_GT;
	v->a[31806] = anon_sym_LT_LT;
	v->a[31807] = anon_sym_LT_LT_DASH;
	v->a[31808] = aux_sym_heredoc_redirect_token1;
	v->a[31809] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31810] = anon_sym_AMP;
	v->a[31811] = aux_sym_concatenation_token1;
	v->a[31812] = anon_sym_DOLLAR;
	v->a[31813] = anon_sym_DQUOTE;
	v->a[31814] = sym_raw_string;
	v->a[31815] = sym_number;
	v->a[31816] = anon_sym_DOLLAR_LBRACE;
	v->a[31817] = anon_sym_DOLLAR_LPAREN;
	v->a[31818] = anon_sym_BQUOTE;
	v->a[31819] = sym_word;
	small_parse_table_1591(v);
}

void	small_parse_table_1591(t_small_parse_table_array *v)
{
	v->a[31820] = anon_sym_SEMI;
	v->a[31821] = 3;
	v->a[31822] = actions(3);
	v->a[31823] = 1;
	v->a[31824] = sym_comment;
	v->a[31825] = actions(792);
	v->a[31826] = 3;
	v->a[31827] = sym_file_descriptor;
	v->a[31828] = sym__concat;
	v->a[31829] = sym__bare_dollar;
	v->a[31830] = actions(790);
	v->a[31831] = 28;
	v->a[31832] = anon_sym_esac;
	v->a[31833] = anon_sym_LPAREN;
	v->a[31834] = anon_sym_PIPE;
	v->a[31835] = anon_sym_SEMI_SEMI;
	v->a[31836] = anon_sym_AMP_AMP;
	v->a[31837] = anon_sym_PIPE_PIPE;
	v->a[31838] = anon_sym_LT;
	v->a[31839] = anon_sym_GT;
	small_parse_table_1592(v);
}

void	small_parse_table_1592(t_small_parse_table_array *v)
{
	v->a[31840] = anon_sym_GT_GT;
	v->a[31841] = anon_sym_LT_AMP;
	v->a[31842] = anon_sym_GT_AMP;
	v->a[31843] = anon_sym_GT_PIPE;
	v->a[31844] = anon_sym_LT_GT;
	v->a[31845] = anon_sym_LT_LT;
	v->a[31846] = anon_sym_LT_LT_DASH;
	v->a[31847] = aux_sym_heredoc_redirect_token1;
	v->a[31848] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31849] = anon_sym_AMP;
	v->a[31850] = aux_sym_concatenation_token1;
	v->a[31851] = anon_sym_DOLLAR;
	v->a[31852] = anon_sym_DQUOTE;
	v->a[31853] = sym_raw_string;
	v->a[31854] = sym_number;
	v->a[31855] = anon_sym_DOLLAR_LBRACE;
	v->a[31856] = anon_sym_DOLLAR_LPAREN;
	v->a[31857] = anon_sym_BQUOTE;
	v->a[31858] = sym_word;
	v->a[31859] = anon_sym_SEMI;
	small_parse_table_1593(v);
}

void	small_parse_table_1593(t_small_parse_table_array *v)
{
	v->a[31860] = 14;
	v->a[31861] = actions(3);
	v->a[31862] = 1;
	v->a[31863] = sym_comment;
	v->a[31864] = actions(463);
	v->a[31865] = 1;
	v->a[31866] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31867] = actions(465);
	v->a[31868] = 1;
	v->a[31869] = anon_sym_DOLLAR;
	v->a[31870] = actions(467);
	v->a[31871] = 1;
	v->a[31872] = anon_sym_DQUOTE;
	v->a[31873] = actions(469);
	v->a[31874] = 1;
	v->a[31875] = anon_sym_DOLLAR_LBRACE;
	v->a[31876] = actions(471);
	v->a[31877] = 1;
	v->a[31878] = anon_sym_DOLLAR_LPAREN;
	v->a[31879] = actions(473);
	small_parse_table_1594(v);
}

void	small_parse_table_1594(t_small_parse_table_array *v)
{
	v->a[31880] = 1;
	v->a[31881] = anon_sym_BQUOTE;
	v->a[31882] = actions(475);
	v->a[31883] = 1;
	v->a[31884] = sym__bare_dollar;
	v->a[31885] = actions(507);
	v->a[31886] = 1;
	v->a[31887] = sym_file_descriptor;
	v->a[31888] = state(432);
	v->a[31889] = 1;
	v->a[31890] = aux_sym_command_repeat2;
	v->a[31891] = state(662);
	v->a[31892] = 1;
	v->a[31893] = sym_concatenation;
	v->a[31894] = actions(963);
	v->a[31895] = 3;
	v->a[31896] = sym_raw_string;
	v->a[31897] = sym_number;
	v->a[31898] = sym_word;
	v->a[31899] = state(713);
	small_parse_table_1595(v);
}

/* EOF small_parse_table_318.c */
