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
	v->a[47800] = anon_sym_RPAREN_RPAREN;
	v->a[47801] = actions(1402);
	v->a[47802] = 2;
	v->a[47803] = anon_sym_PLUS_PLUS2;
	v->a[47804] = anon_sym_DASH_DASH2;
	v->a[47805] = actions(1408);
	v->a[47806] = 2;
	v->a[47807] = anon_sym_LT;
	v->a[47808] = anon_sym_GT;
	v->a[47809] = actions(1410);
	v->a[47810] = 2;
	v->a[47811] = anon_sym_GT_GT;
	v->a[47812] = anon_sym_LT_LT;
	v->a[47813] = actions(1412);
	v->a[47814] = 2;
	v->a[47815] = anon_sym_LT_EQ;
	v->a[47816] = anon_sym_GT_EQ;
	v->a[47817] = actions(1414);
	v->a[47818] = 2;
	v->a[47819] = anon_sym_PLUS;
	small_parse_table_2391(v);
}

void	small_parse_table_2391(t_small_parse_table_array *v)
{
	v->a[47820] = anon_sym_DASH;
	v->a[47821] = actions(1416);
	v->a[47822] = 2;
	v->a[47823] = anon_sym_EQ_EQ;
	v->a[47824] = anon_sym_BANG_EQ;
	v->a[47825] = actions(1406);
	v->a[47826] = 3;
	v->a[47827] = anon_sym_STAR;
	v->a[47828] = anon_sym_SLASH;
	v->a[47829] = anon_sym_PERCENT;
	v->a[47830] = actions(1543);
	v->a[47831] = 10;
	v->a[47832] = anon_sym_PLUS_EQ;
	v->a[47833] = anon_sym_DASH_EQ;
	v->a[47834] = anon_sym_STAR_EQ;
	v->a[47835] = anon_sym_SLASH_EQ;
	v->a[47836] = anon_sym_PERCENT_EQ;
	v->a[47837] = anon_sym_LT_LT_EQ;
	v->a[47838] = anon_sym_GT_GT_EQ;
	v->a[47839] = anon_sym_AMP_EQ;
	small_parse_table_2392(v);
}

void	small_parse_table_2392(t_small_parse_table_array *v)
{
	v->a[47840] = anon_sym_CARET_EQ;
	v->a[47841] = anon_sym_PIPE_EQ;
	v->a[47842] = 3;
	v->a[47843] = actions(3);
	v->a[47844] = 1;
	v->a[47845] = sym_comment;
	v->a[47846] = actions(1241);
	v->a[47847] = 2;
	v->a[47848] = sym_file_descriptor;
	v->a[47849] = sym__concat;
	v->a[47850] = actions(1239);
	v->a[47851] = 31;
	v->a[47852] = anon_sym_PIPE;
	v->a[47853] = anon_sym_RPAREN;
	v->a[47854] = anon_sym_SEMI_SEMI;
	v->a[47855] = anon_sym_AMP_AMP;
	v->a[47856] = anon_sym_PIPE_PIPE;
	v->a[47857] = anon_sym_LT;
	v->a[47858] = anon_sym_GT;
	v->a[47859] = anon_sym_GT_GT;
	small_parse_table_2393(v);
}

void	small_parse_table_2393(t_small_parse_table_array *v)
{
	v->a[47860] = anon_sym_AMP_GT;
	v->a[47861] = anon_sym_AMP_GT_GT;
	v->a[47862] = anon_sym_LT_AMP;
	v->a[47863] = anon_sym_GT_AMP;
	v->a[47864] = anon_sym_GT_PIPE;
	v->a[47865] = anon_sym_LT_AMP_DASH;
	v->a[47866] = anon_sym_GT_AMP_DASH;
	v->a[47867] = anon_sym_LT_LT;
	v->a[47868] = anon_sym_LT_LT_DASH;
	v->a[47869] = aux_sym_heredoc_redirect_token1;
	v->a[47870] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47871] = anon_sym_AMP;
	v->a[47872] = aux_sym_concatenation_token1;
	v->a[47873] = anon_sym_DOLLAR;
	v->a[47874] = anon_sym_DQUOTE;
	v->a[47875] = sym_raw_string;
	v->a[47876] = aux_sym_number_token1;
	v->a[47877] = aux_sym_number_token2;
	v->a[47878] = anon_sym_DOLLAR_LBRACE;
	v->a[47879] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2394(v);
}

void	small_parse_table_2394(t_small_parse_table_array *v)
{
	v->a[47880] = anon_sym_BQUOTE;
	v->a[47881] = sym_word;
	v->a[47882] = anon_sym_SEMI;
	v->a[47883] = 6;
	v->a[47884] = actions(3);
	v->a[47885] = 1;
	v->a[47886] = sym_comment;
	v->a[47887] = actions(1672);
	v->a[47888] = 1;
	v->a[47889] = sym_variable_name;
	v->a[47890] = actions(413);
	v->a[47891] = 2;
	v->a[47892] = sym_file_descriptor;
	v->a[47893] = ts_builtin_sym_end;
	v->a[47894] = actions(1670);
	v->a[47895] = 2;
	v->a[47896] = aux_sym__simple_variable_name_token1;
	v->a[47897] = aux_sym__multiline_variable_name_token1;
	v->a[47898] = actions(1668);
	v->a[47899] = 9;
	small_parse_table_2395(v);
}

/* EOF small_parse_table_478.c */
