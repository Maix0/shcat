/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_795.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3975(t_small_parse_table_array *v)
{
	v->a[79500] = actions(5468);
	v->a[79501] = 37;
	v->a[79502] = anon_sym_LPAREN_LPAREN;
	v->a[79503] = anon_sym_SEMI;
	v->a[79504] = anon_sym_PIPE_PIPE;
	v->a[79505] = anon_sym_AMP_AMP;
	v->a[79506] = anon_sym_PIPE;
	v->a[79507] = anon_sym_AMP;
	v->a[79508] = anon_sym_LT;
	v->a[79509] = anon_sym_GT;
	v->a[79510] = anon_sym_LT_LT;
	v->a[79511] = anon_sym_GT_GT;
	v->a[79512] = anon_sym_SEMI_SEMI;
	v->a[79513] = anon_sym_PIPE_AMP;
	v->a[79514] = anon_sym_AMP_GT;
	v->a[79515] = anon_sym_AMP_GT_GT;
	v->a[79516] = anon_sym_LT_AMP;
	v->a[79517] = anon_sym_GT_AMP;
	v->a[79518] = anon_sym_GT_PIPE;
	v->a[79519] = anon_sym_LT_AMP_DASH;
	small_parse_table_3976(v);
}

void	small_parse_table_3976(t_small_parse_table_array *v)
{
	v->a[79520] = anon_sym_GT_AMP_DASH;
	v->a[79521] = anon_sym_LT_LT_DASH;
	v->a[79522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79523] = anon_sym_DOLLAR_LBRACK;
	v->a[79524] = anon_sym_DOLLAR;
	v->a[79525] = sym__special_character;
	v->a[79526] = anon_sym_DQUOTE;
	v->a[79527] = sym_raw_string;
	v->a[79528] = sym_ansi_c_string;
	v->a[79529] = aux_sym_number_token1;
	v->a[79530] = aux_sym_number_token2;
	v->a[79531] = anon_sym_DOLLAR_LBRACE;
	v->a[79532] = anon_sym_DOLLAR_LPAREN;
	v->a[79533] = anon_sym_BQUOTE;
	v->a[79534] = anon_sym_DOLLAR_BQUOTE;
	v->a[79535] = anon_sym_LT_LPAREN;
	v->a[79536] = anon_sym_GT_LPAREN;
	v->a[79537] = aux_sym__simple_variable_name_token1;
	v->a[79538] = sym_word;
	v->a[79539] = 3;
	small_parse_table_3977(v);
}

void	small_parse_table_3977(t_small_parse_table_array *v)
{
	v->a[79540] = actions(3);
	v->a[79541] = 1;
	v->a[79542] = sym_comment;
	v->a[79543] = actions(1338);
	v->a[79544] = 7;
	v->a[79545] = sym_file_descriptor;
	v->a[79546] = sym__concat;
	v->a[79547] = sym_variable_name;
	v->a[79548] = sym_test_operator;
	v->a[79549] = sym__brace_start;
	v->a[79550] = ts_builtin_sym_end;
	v->a[79551] = aux_sym_heredoc_redirect_token1;
	v->a[79552] = actions(1336);
	v->a[79553] = 38;
	v->a[79554] = anon_sym_LPAREN_LPAREN;
	v->a[79555] = anon_sym_SEMI;
	v->a[79556] = anon_sym_PIPE_PIPE;
	v->a[79557] = anon_sym_AMP_AMP;
	v->a[79558] = anon_sym_PIPE;
	v->a[79559] = anon_sym_AMP;
	small_parse_table_3978(v);
}

void	small_parse_table_3978(t_small_parse_table_array *v)
{
	v->a[79560] = anon_sym_LT;
	v->a[79561] = anon_sym_GT;
	v->a[79562] = anon_sym_LT_LT;
	v->a[79563] = anon_sym_GT_GT;
	v->a[79564] = anon_sym_SEMI_SEMI;
	v->a[79565] = anon_sym_PIPE_AMP;
	v->a[79566] = anon_sym_AMP_GT;
	v->a[79567] = anon_sym_AMP_GT_GT;
	v->a[79568] = anon_sym_LT_AMP;
	v->a[79569] = anon_sym_GT_AMP;
	v->a[79570] = anon_sym_GT_PIPE;
	v->a[79571] = anon_sym_LT_AMP_DASH;
	v->a[79572] = anon_sym_GT_AMP_DASH;
	v->a[79573] = anon_sym_LT_LT_DASH;
	v->a[79574] = anon_sym_LT_LT_LT;
	v->a[79575] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79576] = anon_sym_DOLLAR_LBRACK;
	v->a[79577] = aux_sym_concatenation_token1;
	v->a[79578] = anon_sym_DOLLAR;
	v->a[79579] = sym__special_character;
	small_parse_table_3979(v);
}

void	small_parse_table_3979(t_small_parse_table_array *v)
{
	v->a[79580] = anon_sym_DQUOTE;
	v->a[79581] = sym_raw_string;
	v->a[79582] = sym_ansi_c_string;
	v->a[79583] = aux_sym_number_token1;
	v->a[79584] = aux_sym_number_token2;
	v->a[79585] = anon_sym_DOLLAR_LBRACE;
	v->a[79586] = anon_sym_DOLLAR_LPAREN;
	v->a[79587] = anon_sym_BQUOTE;
	v->a[79588] = anon_sym_DOLLAR_BQUOTE;
	v->a[79589] = anon_sym_LT_LPAREN;
	v->a[79590] = anon_sym_GT_LPAREN;
	v->a[79591] = sym_word;
	v->a[79592] = 3;
	v->a[79593] = actions(3);
	v->a[79594] = 1;
	v->a[79595] = sym_comment;
	v->a[79596] = actions(1330);
	v->a[79597] = 7;
	v->a[79598] = sym_file_descriptor;
	v->a[79599] = sym__concat;
	small_parse_table_3980(v);
}

/* EOF small_parse_table_795.c */
