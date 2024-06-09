/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_595.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2975(t_small_parse_table_array *v)
{
	v->a[59500] = anon_sym_GT;
	v->a[59501] = anon_sym_GT_GT;
	v->a[59502] = anon_sym_AMP_GT;
	v->a[59503] = anon_sym_AMP_GT_GT;
	v->a[59504] = anon_sym_LT_AMP;
	v->a[59505] = anon_sym_GT_AMP;
	v->a[59506] = anon_sym_GT_PIPE;
	v->a[59507] = anon_sym_LT_AMP_DASH;
	v->a[59508] = anon_sym_GT_AMP_DASH;
	v->a[59509] = anon_sym_LT_LT;
	v->a[59510] = anon_sym_LT_LT_DASH;
	v->a[59511] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59512] = aux_sym_concatenation_token1;
	v->a[59513] = anon_sym_DOLLAR;
	v->a[59514] = anon_sym_DQUOTE;
	v->a[59515] = sym_raw_string;
	v->a[59516] = aux_sym_number_token1;
	v->a[59517] = aux_sym_number_token2;
	v->a[59518] = anon_sym_DOLLAR_LBRACE;
	v->a[59519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2976(v);
}

void	small_parse_table_2976(t_small_parse_table_array *v)
{
	v->a[59520] = anon_sym_BQUOTE;
	v->a[59521] = sym_word;
	v->a[59522] = 19;
	v->a[59523] = actions(3);
	v->a[59524] = 1;
	v->a[59525] = sym_comment;
	v->a[59526] = actions(2115);
	v->a[59527] = 1;
	v->a[59528] = anon_sym_LPAREN;
	v->a[59529] = actions(2119);
	v->a[59530] = 1;
	v->a[59531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59532] = actions(2121);
	v->a[59533] = 1;
	v->a[59534] = anon_sym_DOLLAR;
	v->a[59535] = actions(2123);
	v->a[59536] = 1;
	v->a[59537] = anon_sym_DQUOTE;
	v->a[59538] = actions(2125);
	v->a[59539] = 1;
	small_parse_table_2977(v);
}

void	small_parse_table_2977(t_small_parse_table_array *v)
{
	v->a[59540] = aux_sym_number_token1;
	v->a[59541] = actions(2127);
	v->a[59542] = 1;
	v->a[59543] = aux_sym_number_token2;
	v->a[59544] = actions(2129);
	v->a[59545] = 1;
	v->a[59546] = anon_sym_DOLLAR_LBRACE;
	v->a[59547] = actions(2131);
	v->a[59548] = 1;
	v->a[59549] = anon_sym_DOLLAR_LPAREN;
	v->a[59550] = actions(2133);
	v->a[59551] = 1;
	v->a[59552] = anon_sym_BQUOTE;
	v->a[59553] = actions(2135);
	v->a[59554] = 1;
	v->a[59555] = sym_extglob_pattern;
	v->a[59556] = actions(2151);
	v->a[59557] = 1;
	v->a[59558] = anon_sym_esac;
	v->a[59559] = state(1126);
	small_parse_table_2978(v);
}

void	small_parse_table_2978(t_small_parse_table_array *v)
{
	v->a[59560] = 1;
	v->a[59561] = aux_sym_case_statement_repeat1;
	v->a[59562] = state(1786);
	v->a[59563] = 1;
	v->a[59564] = sym_case_item;
	v->a[59565] = state(2129);
	v->a[59566] = 1;
	v->a[59567] = sym__case_item_last;
	v->a[59568] = actions(2111);
	v->a[59569] = 2;
	v->a[59570] = sym_raw_string;
	v->a[59571] = sym_word;
	v->a[59572] = state(2016);
	v->a[59573] = 2;
	v->a[59574] = sym_concatenation;
	v->a[59575] = sym__extglob_blob;
	v->a[59576] = actions(2153);
	v->a[59577] = 4;
	v->a[59578] = anon_sym_SEMI_SEMI;
	v->a[59579] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2979(v);
}

void	small_parse_table_2979(t_small_parse_table_array *v)
{
	v->a[59580] = anon_sym_AMP;
	v->a[59581] = anon_sym_SEMI;
	v->a[59582] = state(1896);
	v->a[59583] = 6;
	v->a[59584] = sym_arithmetic_expansion;
	v->a[59585] = sym_string;
	v->a[59586] = sym_number;
	v->a[59587] = sym_simple_expansion;
	v->a[59588] = sym_expansion;
	v->a[59589] = sym_command_substitution;
	v->a[59590] = 17;
	v->a[59591] = actions(1404);
	v->a[59592] = 1;
	v->a[59593] = sym_comment;
	v->a[59594] = actions(2077);
	v->a[59595] = 1;
	v->a[59596] = anon_sym_LPAREN;
	v->a[59597] = actions(2079);
	v->a[59598] = 1;
	v->a[59599] = anon_sym_BANG;
	small_parse_table_2980(v);
}

/* EOF small_parse_table_595.c */
