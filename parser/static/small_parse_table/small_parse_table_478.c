/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_478.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2390(t_small_parse_table_array *v)
{
	v->a[47800] = sym_file_descriptor;
	v->a[47801] = sym_variable_name;
	v->a[47802] = actions(1437);
	v->a[47803] = 23;
	v->a[47804] = anon_sym_for;
	v->a[47805] = anon_sym_while;
	v->a[47806] = anon_sym_until;
	v->a[47807] = anon_sym_if;
	v->a[47808] = anon_sym_case;
	v->a[47809] = anon_sym_LPAREN;
	v->a[47810] = anon_sym_LBRACE;
	v->a[47811] = anon_sym_BANG;
	v->a[47812] = anon_sym_LT;
	v->a[47813] = anon_sym_GT;
	v->a[47814] = anon_sym_GT_GT;
	v->a[47815] = anon_sym_LT_AMP;
	v->a[47816] = anon_sym_GT_AMP;
	v->a[47817] = anon_sym_GT_PIPE;
	v->a[47818] = anon_sym_LT_GT;
	v->a[47819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2391(v);
}

void	small_parse_table_2391(t_small_parse_table_array *v)
{
	v->a[47820] = anon_sym_DOLLAR;
	v->a[47821] = anon_sym_DQUOTE;
	v->a[47822] = sym_raw_string;
	v->a[47823] = sym_number;
	v->a[47824] = anon_sym_DOLLAR_LBRACE;
	v->a[47825] = anon_sym_DOLLAR_LPAREN;
	v->a[47826] = sym_word;
	v->a[47827] = 6;
	v->a[47828] = actions(3);
	v->a[47829] = 1;
	v->a[47830] = sym_comment;
	v->a[47831] = actions(1728);
	v->a[47832] = 1;
	v->a[47833] = aux_sym_concatenation_token1;
	v->a[47834] = actions(1730);
	v->a[47835] = 1;
	v->a[47836] = sym__concat;
	v->a[47837] = state(826);
	v->a[47838] = 1;
	v->a[47839] = aux_sym_concatenation_repeat1;
	small_parse_table_2392(v);
}

void	small_parse_table_2392(t_small_parse_table_array *v)
{
	v->a[47840] = actions(1172);
	v->a[47841] = 2;
	v->a[47842] = sym_file_descriptor;
	v->a[47843] = sym_variable_name;
	v->a[47844] = actions(1168);
	v->a[47845] = 21;
	v->a[47846] = anon_sym_PIPE;
	v->a[47847] = anon_sym_AMP_AMP;
	v->a[47848] = anon_sym_PIPE_PIPE;
	v->a[47849] = anon_sym_LT;
	v->a[47850] = anon_sym_GT;
	v->a[47851] = anon_sym_GT_GT;
	v->a[47852] = anon_sym_LT_AMP;
	v->a[47853] = anon_sym_GT_AMP;
	v->a[47854] = anon_sym_GT_PIPE;
	v->a[47855] = anon_sym_LT_GT;
	v->a[47856] = anon_sym_LT_LT;
	v->a[47857] = anon_sym_LT_LT_DASH;
	v->a[47858] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47859] = anon_sym_DOLLAR;
	small_parse_table_2393(v);
}

void	small_parse_table_2393(t_small_parse_table_array *v)
{
	v->a[47860] = anon_sym_DQUOTE;
	v->a[47861] = sym_raw_string;
	v->a[47862] = sym_number;
	v->a[47863] = anon_sym_DOLLAR_LBRACE;
	v->a[47864] = anon_sym_DOLLAR_LPAREN;
	v->a[47865] = anon_sym_BQUOTE;
	v->a[47866] = sym_word;
	v->a[47867] = 3;
	v->a[47868] = actions(3);
	v->a[47869] = 1;
	v->a[47870] = sym_comment;
	v->a[47871] = actions(753);
	v->a[47872] = 3;
	v->a[47873] = sym_file_descriptor;
	v->a[47874] = sym__concat;
	v->a[47875] = sym__bare_dollar;
	v->a[47876] = actions(751);
	v->a[47877] = 23;
	v->a[47878] = anon_sym_LPAREN;
	v->a[47879] = anon_sym_PIPE;
	small_parse_table_2394(v);
}

void	small_parse_table_2394(t_small_parse_table_array *v)
{
	v->a[47880] = anon_sym_AMP_AMP;
	v->a[47881] = anon_sym_PIPE_PIPE;
	v->a[47882] = anon_sym_LT;
	v->a[47883] = anon_sym_GT;
	v->a[47884] = anon_sym_GT_GT;
	v->a[47885] = anon_sym_LT_AMP;
	v->a[47886] = anon_sym_GT_AMP;
	v->a[47887] = anon_sym_GT_PIPE;
	v->a[47888] = anon_sym_LT_GT;
	v->a[47889] = anon_sym_LT_LT;
	v->a[47890] = anon_sym_LT_LT_DASH;
	v->a[47891] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47892] = aux_sym_concatenation_token1;
	v->a[47893] = anon_sym_DOLLAR;
	v->a[47894] = anon_sym_DQUOTE;
	v->a[47895] = sym_raw_string;
	v->a[47896] = sym_number;
	v->a[47897] = anon_sym_DOLLAR_LBRACE;
	v->a[47898] = anon_sym_DOLLAR_LPAREN;
	v->a[47899] = anon_sym_BQUOTE;
	small_parse_table_2395(v);
}

/* EOF small_parse_table_478.c */
