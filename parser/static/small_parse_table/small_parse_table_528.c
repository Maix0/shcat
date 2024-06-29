/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_528.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2640(t_small_parse_table_array *v)
{
	v->a[52800] = anon_sym_while;
	v->a[52801] = anon_sym_until;
	v->a[52802] = anon_sym_if;
	v->a[52803] = anon_sym_case;
	v->a[52804] = anon_sym_LPAREN;
	v->a[52805] = anon_sym_LBRACE;
	v->a[52806] = anon_sym_BANG;
	v->a[52807] = anon_sym_LT;
	v->a[52808] = anon_sym_GT;
	v->a[52809] = anon_sym_GT_GT;
	v->a[52810] = anon_sym_AMP_GT;
	v->a[52811] = anon_sym_AMP_GT_GT;
	v->a[52812] = anon_sym_LT_AMP;
	v->a[52813] = anon_sym_GT_AMP;
	v->a[52814] = anon_sym_GT_PIPE;
	v->a[52815] = anon_sym_LT_AMP_DASH;
	v->a[52816] = anon_sym_GT_AMP_DASH;
	v->a[52817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52818] = anon_sym_DOLLAR;
	v->a[52819] = anon_sym_DQUOTE;
	small_parse_table_2641(v);
}

void	small_parse_table_2641(t_small_parse_table_array *v)
{
	v->a[52820] = sym_raw_string;
	v->a[52821] = sym_number;
	v->a[52822] = anon_sym_DOLLAR_LBRACE;
	v->a[52823] = anon_sym_DOLLAR_LPAREN;
	v->a[52824] = sym_word;
	v->a[52825] = 6;
	v->a[52826] = actions(3);
	v->a[52827] = 1;
	v->a[52828] = sym_comment;
	v->a[52829] = actions(961);
	v->a[52830] = 1;
	v->a[52831] = sym_file_descriptor;
	v->a[52832] = actions(1320);
	v->a[52833] = 1;
	v->a[52834] = aux_sym_concatenation_token1;
	v->a[52835] = actions(1768);
	v->a[52836] = 1;
	v->a[52837] = sym__concat;
	v->a[52838] = state(446);
	v->a[52839] = 1;
	small_parse_table_2642(v);
}

void	small_parse_table_2642(t_small_parse_table_array *v)
{
	v->a[52840] = aux_sym_concatenation_repeat1;
	v->a[52841] = actions(957);
	v->a[52842] = 25;
	v->a[52843] = anon_sym_PIPE;
	v->a[52844] = anon_sym_AMP_AMP;
	v->a[52845] = anon_sym_PIPE_PIPE;
	v->a[52846] = anon_sym_LT;
	v->a[52847] = anon_sym_GT;
	v->a[52848] = anon_sym_GT_GT;
	v->a[52849] = anon_sym_AMP_GT;
	v->a[52850] = anon_sym_AMP_GT_GT;
	v->a[52851] = anon_sym_LT_AMP;
	v->a[52852] = anon_sym_GT_AMP;
	v->a[52853] = anon_sym_GT_PIPE;
	v->a[52854] = anon_sym_LT_AMP_DASH;
	v->a[52855] = anon_sym_GT_AMP_DASH;
	v->a[52856] = anon_sym_LT_LT;
	v->a[52857] = anon_sym_LT_LT_DASH;
	v->a[52858] = aux_sym_heredoc_redirect_token1;
	v->a[52859] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2643(v);
}

void	small_parse_table_2643(t_small_parse_table_array *v)
{
	v->a[52860] = anon_sym_DOLLAR;
	v->a[52861] = anon_sym_DQUOTE;
	v->a[52862] = sym_raw_string;
	v->a[52863] = sym_number;
	v->a[52864] = anon_sym_DOLLAR_LBRACE;
	v->a[52865] = anon_sym_DOLLAR_LPAREN;
	v->a[52866] = anon_sym_BQUOTE;
	v->a[52867] = sym_word;
	v->a[52868] = 4;
	v->a[52869] = actions(3);
	v->a[52870] = 1;
	v->a[52871] = sym_comment;
	v->a[52872] = actions(1522);
	v->a[52873] = 1;
	v->a[52874] = anon_sym_BQUOTE;
	v->a[52875] = actions(1524);
	v->a[52876] = 2;
	v->a[52877] = sym_file_descriptor;
	v->a[52878] = sym_variable_name;
	v->a[52879] = actions(1520);
	small_parse_table_2644(v);
}

void	small_parse_table_2644(t_small_parse_table_array *v)
{
	v->a[52880] = 26;
	v->a[52881] = anon_sym_for;
	v->a[52882] = anon_sym_while;
	v->a[52883] = anon_sym_until;
	v->a[52884] = anon_sym_if;
	v->a[52885] = anon_sym_case;
	v->a[52886] = anon_sym_LPAREN;
	v->a[52887] = anon_sym_LBRACE;
	v->a[52888] = anon_sym_BANG;
	v->a[52889] = anon_sym_LT;
	v->a[52890] = anon_sym_GT;
	v->a[52891] = anon_sym_GT_GT;
	v->a[52892] = anon_sym_AMP_GT;
	v->a[52893] = anon_sym_AMP_GT_GT;
	v->a[52894] = anon_sym_LT_AMP;
	v->a[52895] = anon_sym_GT_AMP;
	v->a[52896] = anon_sym_GT_PIPE;
	v->a[52897] = anon_sym_LT_AMP_DASH;
	v->a[52898] = anon_sym_GT_AMP_DASH;
	v->a[52899] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2645(v);
}

/* EOF small_parse_table_528.c */
