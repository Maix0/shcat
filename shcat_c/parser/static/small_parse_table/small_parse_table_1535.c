/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1535.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7675(t_small_parse_table_array *v)
{
	v->a[153500] = sym_file_descriptor;
	v->a[153501] = actions(3371);
	v->a[153502] = 1;
	v->a[153503] = anon_sym_DQUOTE;
	v->a[153504] = actions(7153);
	v->a[153505] = 1;
	v->a[153506] = sym_variable_name;
	v->a[153507] = state(4512);
	v->a[153508] = 1;
	v->a[153509] = sym_string;
	v->a[153510] = actions(7151);
	v->a[153511] = 2;
	v->a[153512] = aux_sym__simple_variable_name_token1;
	v->a[153513] = aux_sym__multiline_variable_name_token1;
	v->a[153514] = actions(7149);
	v->a[153515] = 9;
	v->a[153516] = anon_sym_DASH;
	v->a[153517] = anon_sym_STAR;
	v->a[153518] = anon_sym_BANG;
	v->a[153519] = anon_sym_QMARK;
	small_parse_table_7676(v);
}

void	small_parse_table_7676(t_small_parse_table_array *v)
{
	v->a[153520] = anon_sym_DOLLAR;
	v->a[153521] = anon_sym_POUND;
	v->a[153522] = anon_sym_AT2;
	v->a[153523] = anon_sym_0;
	v->a[153524] = anon_sym__;
	v->a[153525] = actions(1239);
	v->a[153526] = 23;
	v->a[153527] = anon_sym_SEMI;
	v->a[153528] = anon_sym_PIPE_PIPE;
	v->a[153529] = anon_sym_AMP_AMP;
	v->a[153530] = anon_sym_PIPE;
	v->a[153531] = anon_sym_AMP;
	v->a[153532] = anon_sym_LT;
	v->a[153533] = anon_sym_GT;
	v->a[153534] = anon_sym_LT_LT;
	v->a[153535] = anon_sym_GT_GT;
	v->a[153536] = anon_sym_esac;
	v->a[153537] = anon_sym_SEMI_SEMI;
	v->a[153538] = anon_sym_SEMI_AMP;
	v->a[153539] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_7677(v);
}

void	small_parse_table_7677(t_small_parse_table_array *v)
{
	v->a[153540] = anon_sym_PIPE_AMP;
	v->a[153541] = anon_sym_AMP_GT;
	v->a[153542] = anon_sym_AMP_GT_GT;
	v->a[153543] = anon_sym_LT_AMP;
	v->a[153544] = anon_sym_GT_AMP;
	v->a[153545] = anon_sym_GT_PIPE;
	v->a[153546] = anon_sym_LT_AMP_DASH;
	v->a[153547] = anon_sym_GT_AMP_DASH;
	v->a[153548] = anon_sym_LT_LT_DASH;
	v->a[153549] = aux_sym_heredoc_redirect_token1;
	v->a[153550] = 3;
	v->a[153551] = actions(71);
	v->a[153552] = 1;
	v->a[153553] = sym_comment;
	v->a[153554] = actions(1336);
	v->a[153555] = 13;
	v->a[153556] = anon_sym_PIPE;
	v->a[153557] = anon_sym_LT;
	v->a[153558] = anon_sym_GT;
	v->a[153559] = anon_sym_LT_LT;
	small_parse_table_7678(v);
}

void	small_parse_table_7678(t_small_parse_table_array *v)
{
	v->a[153560] = anon_sym_AMP_GT;
	v->a[153561] = anon_sym_LT_AMP;
	v->a[153562] = anon_sym_GT_AMP;
	v->a[153563] = anon_sym_DOLLAR;
	v->a[153564] = aux_sym_number_token1;
	v->a[153565] = aux_sym_number_token2;
	v->a[153566] = anon_sym_DOLLAR_LPAREN;
	v->a[153567] = anon_sym_BQUOTE;
	v->a[153568] = sym_word;
	v->a[153569] = actions(1338);
	v->a[153570] = 25;
	v->a[153571] = sym_file_descriptor;
	v->a[153572] = sym__concat;
	v->a[153573] = sym_test_operator;
	v->a[153574] = sym__brace_start;
	v->a[153575] = anon_sym_LPAREN_LPAREN;
	v->a[153576] = anon_sym_PIPE_PIPE;
	v->a[153577] = anon_sym_AMP_AMP;
	v->a[153578] = anon_sym_GT_GT;
	v->a[153579] = anon_sym_PIPE_AMP;
	small_parse_table_7679(v);
}

void	small_parse_table_7679(t_small_parse_table_array *v)
{
	v->a[153580] = anon_sym_AMP_GT_GT;
	v->a[153581] = anon_sym_GT_PIPE;
	v->a[153582] = anon_sym_LT_AMP_DASH;
	v->a[153583] = anon_sym_GT_AMP_DASH;
	v->a[153584] = anon_sym_LT_LT_DASH;
	v->a[153585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[153586] = anon_sym_DOLLAR_LBRACK;
	v->a[153587] = aux_sym_concatenation_token1;
	v->a[153588] = sym__special_character;
	v->a[153589] = anon_sym_DQUOTE;
	v->a[153590] = sym_raw_string;
	v->a[153591] = sym_ansi_c_string;
	v->a[153592] = anon_sym_DOLLAR_LBRACE;
	v->a[153593] = anon_sym_DOLLAR_BQUOTE;
	v->a[153594] = anon_sym_LT_LPAREN;
	v->a[153595] = anon_sym_GT_LPAREN;
	v->a[153596] = 3;
	v->a[153597] = actions(71);
	v->a[153598] = 1;
	v->a[153599] = sym_comment;
	small_parse_table_7680(v);
}

/* EOF small_parse_table_1535.c */
