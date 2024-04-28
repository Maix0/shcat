/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2815.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14075(t_small_parse_table_array *v)
{
	v->a[281500] = sym__special_character;
	v->a[281501] = anon_sym_DQUOTE;
	v->a[281502] = sym_raw_string;
	v->a[281503] = sym_ansi_c_string;
	v->a[281504] = anon_sym_DOLLAR_LBRACE;
	v->a[281505] = anon_sym_BQUOTE;
	v->a[281506] = anon_sym_DOLLAR_BQUOTE;
	v->a[281507] = anon_sym_LT_LPAREN;
	v->a[281508] = anon_sym_GT_LPAREN;
	v->a[281509] = 3;
	v->a[281510] = actions(71);
	v->a[281511] = 1;
	v->a[281512] = sym_comment;
	v->a[281513] = actions(12682);
	v->a[281514] = 6;
	v->a[281515] = anon_sym_LPAREN;
	v->a[281516] = anon_sym_DOLLAR;
	v->a[281517] = aux_sym_number_token1;
	v->a[281518] = aux_sym_number_token2;
	v->a[281519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_14076(v);
}

void	small_parse_table_14076(t_small_parse_table_array *v)
{
	v->a[281520] = sym_word;
	v->a[281521] = actions(12684);
	v->a[281522] = 15;
	v->a[281523] = sym_test_operator;
	v->a[281524] = sym_extglob_pattern;
	v->a[281525] = sym__brace_start;
	v->a[281526] = anon_sym_LPAREN_LPAREN;
	v->a[281527] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[281528] = anon_sym_DOLLAR_LBRACK;
	v->a[281529] = sym__special_character;
	v->a[281530] = anon_sym_DQUOTE;
	v->a[281531] = sym_raw_string;
	v->a[281532] = sym_ansi_c_string;
	v->a[281533] = anon_sym_DOLLAR_LBRACE;
	v->a[281534] = anon_sym_BQUOTE;
	v->a[281535] = anon_sym_DOLLAR_BQUOTE;
	v->a[281536] = anon_sym_LT_LPAREN;
	v->a[281537] = anon_sym_GT_LPAREN;
	v->a[281538] = 3;
	v->a[281539] = actions(71);
	small_parse_table_14077(v);
}

void	small_parse_table_14077(t_small_parse_table_array *v)
{
	v->a[281540] = 1;
	v->a[281541] = sym_comment;
	v->a[281542] = actions(12682);
	v->a[281543] = 6;
	v->a[281544] = anon_sym_LPAREN;
	v->a[281545] = anon_sym_DOLLAR;
	v->a[281546] = aux_sym_number_token1;
	v->a[281547] = aux_sym_number_token2;
	v->a[281548] = anon_sym_DOLLAR_LPAREN;
	v->a[281549] = sym_word;
	v->a[281550] = actions(12684);
	v->a[281551] = 15;
	v->a[281552] = sym_test_operator;
	v->a[281553] = sym_extglob_pattern;
	v->a[281554] = sym__brace_start;
	v->a[281555] = anon_sym_LPAREN_LPAREN;
	v->a[281556] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[281557] = anon_sym_DOLLAR_LBRACK;
	v->a[281558] = sym__special_character;
	v->a[281559] = anon_sym_DQUOTE;
	small_parse_table_14078(v);
}

void	small_parse_table_14078(t_small_parse_table_array *v)
{
	v->a[281560] = sym_raw_string;
	v->a[281561] = sym_ansi_c_string;
	v->a[281562] = anon_sym_DOLLAR_LBRACE;
	v->a[281563] = anon_sym_BQUOTE;
	v->a[281564] = anon_sym_DOLLAR_BQUOTE;
	v->a[281565] = anon_sym_LT_LPAREN;
	v->a[281566] = anon_sym_GT_LPAREN;
	v->a[281567] = 3;
	v->a[281568] = actions(71);
	v->a[281569] = 1;
	v->a[281570] = sym_comment;
	v->a[281571] = actions(1304);
	v->a[281572] = 7;
	v->a[281573] = anon_sym_PIPE;
	v->a[281574] = anon_sym_LT;
	v->a[281575] = anon_sym_GT;
	v->a[281576] = anon_sym_LT_LT;
	v->a[281577] = anon_sym_AMP_GT;
	v->a[281578] = anon_sym_LT_AMP;
	v->a[281579] = anon_sym_GT_AMP;
	small_parse_table_14079(v);
}

void	small_parse_table_14079(t_small_parse_table_array *v)
{
	v->a[281580] = actions(1306);
	v->a[281581] = 14;
	v->a[281582] = sym_file_descriptor;
	v->a[281583] = sym__concat;
	v->a[281584] = anon_sym_PIPE_PIPE;
	v->a[281585] = anon_sym_AMP_AMP;
	v->a[281586] = anon_sym_GT_GT;
	v->a[281587] = anon_sym_PIPE_AMP;
	v->a[281588] = anon_sym_RBRACK;
	v->a[281589] = anon_sym_AMP_GT_GT;
	v->a[281590] = anon_sym_GT_PIPE;
	v->a[281591] = anon_sym_LT_AMP_DASH;
	v->a[281592] = anon_sym_GT_AMP_DASH;
	v->a[281593] = anon_sym_LT_LT_DASH;
	v->a[281594] = anon_sym_LT_LT_LT;
	v->a[281595] = aux_sym_concatenation_token1;
	v->a[281596] = 3;
	v->a[281597] = actions(71);
	v->a[281598] = 1;
	v->a[281599] = sym_comment;
	small_parse_table_14080(v);
}

/* EOF small_parse_table_2815.c */
