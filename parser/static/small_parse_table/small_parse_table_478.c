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
	v->a[47800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47801] = actions(1726);
	v->a[47802] = 1;
	v->a[47803] = anon_sym_DOLLAR;
	v->a[47804] = actions(1728);
	v->a[47805] = 1;
	v->a[47806] = anon_sym_DQUOTE;
	v->a[47807] = actions(1730);
	v->a[47808] = 1;
	v->a[47809] = anon_sym_DOLLAR_LBRACE;
	v->a[47810] = actions(1732);
	v->a[47811] = 1;
	v->a[47812] = anon_sym_DOLLAR_LPAREN;
	v->a[47813] = actions(1734);
	v->a[47814] = 1;
	v->a[47815] = anon_sym_BQUOTE;
	v->a[47816] = actions(1736);
	v->a[47817] = 1;
	v->a[47818] = sym_extglob_pattern;
	v->a[47819] = actions(1758);
	small_parse_table_2391(v);
}

void	small_parse_table_2391(t_small_parse_table_array *v)
{
	v->a[47820] = 1;
	v->a[47821] = anon_sym_esac;
	v->a[47822] = state(945);
	v->a[47823] = 1;
	v->a[47824] = sym_terminator;
	v->a[47825] = state(1015);
	v->a[47826] = 1;
	v->a[47827] = aux_sym_case_statement_repeat1;
	v->a[47828] = state(1682);
	v->a[47829] = 1;
	v->a[47830] = sym_case_item;
	v->a[47831] = state(1947);
	v->a[47832] = 1;
	v->a[47833] = sym__case_item_last;
	v->a[47834] = state(1877);
	v->a[47835] = 2;
	v->a[47836] = sym_concatenation;
	v->a[47837] = sym__extglob_blob;
	v->a[47838] = actions(1716);
	v->a[47839] = 3;
	small_parse_table_2392(v);
}

void	small_parse_table_2392(t_small_parse_table_array *v)
{
	v->a[47840] = sym_raw_string;
	v->a[47841] = sym_number;
	v->a[47842] = sym_word;
	v->a[47843] = actions(1722);
	v->a[47844] = 3;
	v->a[47845] = anon_sym_SEMI_SEMI;
	v->a[47846] = aux_sym_heredoc_redirect_token1;
	v->a[47847] = anon_sym_SEMI;
	v->a[47848] = state(1772);
	v->a[47849] = 5;
	v->a[47850] = sym_arithmetic_expansion;
	v->a[47851] = sym_string;
	v->a[47852] = sym_simple_expansion;
	v->a[47853] = sym_expansion;
	v->a[47854] = sym_command_substitution;
	v->a[47855] = 3;
	v->a[47856] = actions(3);
	v->a[47857] = 1;
	v->a[47858] = sym_comment;
	v->a[47859] = actions(571);
	small_parse_table_2393(v);
}

void	small_parse_table_2393(t_small_parse_table_array *v)
{
	v->a[47860] = 3;
	v->a[47861] = sym_file_descriptor;
	v->a[47862] = sym__concat;
	v->a[47863] = sym__bare_dollar;
	v->a[47864] = actions(569);
	v->a[47865] = 23;
	v->a[47866] = anon_sym_LPAREN;
	v->a[47867] = anon_sym_PIPE;
	v->a[47868] = anon_sym_AMP_AMP;
	v->a[47869] = anon_sym_PIPE_PIPE;
	v->a[47870] = anon_sym_LT;
	v->a[47871] = anon_sym_GT;
	v->a[47872] = anon_sym_GT_GT;
	v->a[47873] = anon_sym_LT_AMP;
	v->a[47874] = anon_sym_GT_AMP;
	v->a[47875] = anon_sym_GT_PIPE;
	v->a[47876] = anon_sym_LT_GT;
	v->a[47877] = anon_sym_LT_LT;
	v->a[47878] = anon_sym_LT_LT_DASH;
	v->a[47879] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2394(v);
}

void	small_parse_table_2394(t_small_parse_table_array *v)
{
	v->a[47880] = aux_sym_concatenation_token1;
	v->a[47881] = anon_sym_DOLLAR;
	v->a[47882] = anon_sym_DQUOTE;
	v->a[47883] = sym_raw_string;
	v->a[47884] = sym_number;
	v->a[47885] = anon_sym_DOLLAR_LBRACE;
	v->a[47886] = anon_sym_DOLLAR_LPAREN;
	v->a[47887] = anon_sym_BQUOTE;
	v->a[47888] = sym_word;
	v->a[47889] = 4;
	v->a[47890] = actions(3);
	v->a[47891] = 1;
	v->a[47892] = sym_comment;
	v->a[47893] = actions(1420);
	v->a[47894] = 1;
	v->a[47895] = anon_sym_BQUOTE;
	v->a[47896] = actions(1412);
	v->a[47897] = 2;
	v->a[47898] = sym_file_descriptor;
	v->a[47899] = sym_variable_name;
	small_parse_table_2395(v);
}

/* EOF small_parse_table_478.c */
