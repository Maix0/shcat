/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1938.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9690(t_small_parse_table_array *v)
{
	v->a[193800] = actions(3);
	v->a[193801] = 1;
	v->a[193802] = sym_comment;
	v->a[193803] = actions(3729);
	v->a[193804] = 1;
	v->a[193805] = anon_sym_DOLLAR_LBRACK;
	v->a[193806] = actions(3731);
	v->a[193807] = 1;
	v->a[193808] = anon_sym_DOLLAR;
	v->a[193809] = actions(3733);
	v->a[193810] = 1;
	v->a[193811] = sym__special_character;
	v->a[193812] = actions(3735);
	v->a[193813] = 1;
	v->a[193814] = anon_sym_DQUOTE;
	v->a[193815] = actions(3737);
	v->a[193816] = 1;
	v->a[193817] = aux_sym_number_token1;
	v->a[193818] = actions(3739);
	v->a[193819] = 1;
	small_parse_table_9691(v);
}

void	small_parse_table_9691(t_small_parse_table_array *v)
{
	v->a[193820] = aux_sym_number_token2;
	v->a[193821] = actions(3741);
	v->a[193822] = 1;
	v->a[193823] = anon_sym_DOLLAR_LBRACE;
	v->a[193824] = actions(3743);
	v->a[193825] = 1;
	v->a[193826] = anon_sym_DOLLAR_LPAREN;
	v->a[193827] = actions(3745);
	v->a[193828] = 1;
	v->a[193829] = anon_sym_BQUOTE;
	v->a[193830] = actions(3747);
	v->a[193831] = 1;
	v->a[193832] = anon_sym_DOLLAR_BQUOTE;
	v->a[193833] = actions(3753);
	v->a[193834] = 1;
	v->a[193835] = sym_test_operator;
	v->a[193836] = actions(3755);
	v->a[193837] = 1;
	v->a[193838] = sym__brace_start;
	v->a[193839] = actions(8643);
	small_parse_table_9692(v);
}

void	small_parse_table_9692(t_small_parse_table_array *v)
{
	v->a[193840] = 1;
	v->a[193841] = aux_sym_heredoc_redirect_token1;
	v->a[193842] = state(3571);
	v->a[193843] = 1;
	v->a[193844] = aux_sym__heredoc_command;
	v->a[193845] = state(5351);
	v->a[193846] = 1;
	v->a[193847] = aux_sym__literal_repeat1;
	v->a[193848] = state(5456);
	v->a[193849] = 1;
	v->a[193850] = sym_concatenation;
	v->a[193851] = actions(3715);
	v->a[193852] = 2;
	v->a[193853] = anon_sym_LPAREN_LPAREN;
	v->a[193854] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193855] = actions(3749);
	v->a[193856] = 2;
	v->a[193857] = anon_sym_LT_LPAREN;
	v->a[193858] = anon_sym_GT_LPAREN;
	v->a[193859] = actions(3713);
	small_parse_table_9693(v);
}

void	small_parse_table_9693(t_small_parse_table_array *v)
{
	v->a[193860] = 3;
	v->a[193861] = sym_raw_string;
	v->a[193862] = sym_ansi_c_string;
	v->a[193863] = sym_word;
	v->a[193864] = state(5062);
	v->a[193865] = 9;
	v->a[193866] = sym_arithmetic_expansion;
	v->a[193867] = sym_brace_expression;
	v->a[193868] = sym_string;
	v->a[193869] = sym_translated_string;
	v->a[193870] = sym_number;
	v->a[193871] = sym_simple_expansion;
	v->a[193872] = sym_expansion;
	v->a[193873] = sym_command_substitution;
	v->a[193874] = sym_process_substitution;
	v->a[193875] = 21;
	v->a[193876] = actions(3);
	v->a[193877] = 1;
	v->a[193878] = sym_comment;
	v->a[193879] = actions(8651);
	small_parse_table_9694(v);
}

void	small_parse_table_9694(t_small_parse_table_array *v)
{
	v->a[193880] = 1;
	v->a[193881] = aux_sym_heredoc_redirect_token1;
	v->a[193882] = actions(8653);
	v->a[193883] = 1;
	v->a[193884] = anon_sym_DOLLAR_LBRACK;
	v->a[193885] = actions(8656);
	v->a[193886] = 1;
	v->a[193887] = anon_sym_DOLLAR;
	v->a[193888] = actions(8659);
	v->a[193889] = 1;
	v->a[193890] = sym__special_character;
	v->a[193891] = actions(8662);
	v->a[193892] = 1;
	v->a[193893] = anon_sym_DQUOTE;
	v->a[193894] = actions(8665);
	v->a[193895] = 1;
	v->a[193896] = aux_sym_number_token1;
	v->a[193897] = actions(8668);
	v->a[193898] = 1;
	v->a[193899] = aux_sym_number_token2;
	small_parse_table_9695(v);
}

/* EOF small_parse_table_1938.c */
