/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_745.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3725(t_small_parse_table_array *v)
{
	v->a[74500] = anon_sym_AMP_AMP;
	v->a[74501] = anon_sym_PIPE;
	v->a[74502] = anon_sym_AMP;
	v->a[74503] = anon_sym_LT;
	v->a[74504] = anon_sym_GT;
	v->a[74505] = anon_sym_LT_LT;
	v->a[74506] = anon_sym_GT_GT;
	v->a[74507] = anon_sym_SEMI_SEMI;
	v->a[74508] = anon_sym_PIPE_AMP;
	v->a[74509] = anon_sym_AMP_GT;
	v->a[74510] = anon_sym_AMP_GT_GT;
	v->a[74511] = anon_sym_LT_AMP;
	v->a[74512] = anon_sym_GT_AMP;
	v->a[74513] = anon_sym_GT_PIPE;
	v->a[74514] = anon_sym_LT_AMP_DASH;
	v->a[74515] = anon_sym_GT_AMP_DASH;
	v->a[74516] = anon_sym_LT_LT_DASH;
	v->a[74517] = anon_sym_LT_LT_LT;
	v->a[74518] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74519] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_3726(v);
}

void	small_parse_table_3726(t_small_parse_table_array *v)
{
	v->a[74520] = anon_sym_DOLLAR;
	v->a[74521] = sym__special_character;
	v->a[74522] = anon_sym_DQUOTE;
	v->a[74523] = sym_raw_string;
	v->a[74524] = sym_ansi_c_string;
	v->a[74525] = aux_sym_number_token1;
	v->a[74526] = aux_sym_number_token2;
	v->a[74527] = anon_sym_DOLLAR_LBRACE;
	v->a[74528] = anon_sym_DOLLAR_LPAREN;
	v->a[74529] = anon_sym_BQUOTE;
	v->a[74530] = anon_sym_DOLLAR_BQUOTE;
	v->a[74531] = anon_sym_LT_LPAREN;
	v->a[74532] = anon_sym_GT_LPAREN;
	v->a[74533] = sym_word;
	v->a[74534] = 6;
	v->a[74535] = actions(3);
	v->a[74536] = 1;
	v->a[74537] = sym_comment;
	v->a[74538] = actions(5762);
	v->a[74539] = 1;
	small_parse_table_3727(v);
}

void	small_parse_table_3727(t_small_parse_table_array *v)
{
	v->a[74540] = aux_sym_concatenation_token1;
	v->a[74541] = actions(5789);
	v->a[74542] = 1;
	v->a[74543] = sym__concat;
	v->a[74544] = state(1528);
	v->a[74545] = 1;
	v->a[74546] = aux_sym_concatenation_repeat1;
	v->a[74547] = actions(1263);
	v->a[74548] = 5;
	v->a[74549] = sym_file_descriptor;
	v->a[74550] = sym_test_operator;
	v->a[74551] = sym__brace_start;
	v->a[74552] = ts_builtin_sym_end;
	v->a[74553] = aux_sym_heredoc_redirect_token1;
	v->a[74554] = actions(1261);
	v->a[74555] = 37;
	v->a[74556] = anon_sym_LPAREN_LPAREN;
	v->a[74557] = anon_sym_SEMI;
	v->a[74558] = anon_sym_PIPE_PIPE;
	v->a[74559] = anon_sym_AMP_AMP;
	small_parse_table_3728(v);
}

void	small_parse_table_3728(t_small_parse_table_array *v)
{
	v->a[74560] = anon_sym_PIPE;
	v->a[74561] = anon_sym_AMP;
	v->a[74562] = anon_sym_LT;
	v->a[74563] = anon_sym_GT;
	v->a[74564] = anon_sym_LT_LT;
	v->a[74565] = anon_sym_GT_GT;
	v->a[74566] = anon_sym_SEMI_SEMI;
	v->a[74567] = anon_sym_PIPE_AMP;
	v->a[74568] = anon_sym_AMP_GT;
	v->a[74569] = anon_sym_AMP_GT_GT;
	v->a[74570] = anon_sym_LT_AMP;
	v->a[74571] = anon_sym_GT_AMP;
	v->a[74572] = anon_sym_GT_PIPE;
	v->a[74573] = anon_sym_LT_AMP_DASH;
	v->a[74574] = anon_sym_GT_AMP_DASH;
	v->a[74575] = anon_sym_LT_LT_DASH;
	v->a[74576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74577] = anon_sym_DOLLAR_LBRACK;
	v->a[74578] = anon_sym_DOLLAR;
	v->a[74579] = sym__special_character;
	small_parse_table_3729(v);
}

void	small_parse_table_3729(t_small_parse_table_array *v)
{
	v->a[74580] = anon_sym_DQUOTE;
	v->a[74581] = sym_raw_string;
	v->a[74582] = sym_ansi_c_string;
	v->a[74583] = aux_sym_number_token1;
	v->a[74584] = aux_sym_number_token2;
	v->a[74585] = anon_sym_DOLLAR_LBRACE;
	v->a[74586] = anon_sym_DOLLAR_LPAREN;
	v->a[74587] = anon_sym_BQUOTE;
	v->a[74588] = anon_sym_DOLLAR_BQUOTE;
	v->a[74589] = anon_sym_LT_LPAREN;
	v->a[74590] = anon_sym_GT_LPAREN;
	v->a[74591] = aux_sym__simple_variable_name_token1;
	v->a[74592] = sym_word;
	v->a[74593] = 3;
	v->a[74594] = actions(3);
	v->a[74595] = 1;
	v->a[74596] = sym_comment;
	v->a[74597] = actions(1294);
	v->a[74598] = 6;
	v->a[74599] = sym_file_descriptor;
	small_parse_table_3730(v);
}

/* EOF small_parse_table_745.c */
