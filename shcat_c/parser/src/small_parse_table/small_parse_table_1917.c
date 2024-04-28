/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1917.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9585(t_small_parse_table_array *v)
{
	v->a[191700] = anon_sym_DASH;
	v->a[191701] = anon_sym_STAR;
	v->a[191702] = anon_sym_BANG;
	v->a[191703] = anon_sym_QMARK;
	v->a[191704] = anon_sym_DOLLAR;
	v->a[191705] = anon_sym_POUND;
	v->a[191706] = anon_sym_AT2;
	v->a[191707] = anon_sym_0;
	v->a[191708] = anon_sym__;
	v->a[191709] = actions(1227);
	v->a[191710] = 18;
	v->a[191711] = anon_sym_PIPE_PIPE;
	v->a[191712] = anon_sym_AMP_AMP;
	v->a[191713] = anon_sym_PIPE;
	v->a[191714] = anon_sym_LT;
	v->a[191715] = anon_sym_GT;
	v->a[191716] = anon_sym_LT_LT;
	v->a[191717] = anon_sym_GT_GT;
	v->a[191718] = anon_sym_PIPE_AMP;
	v->a[191719] = anon_sym_AMP_GT;
	small_parse_table_9586(v);
}

void	small_parse_table_9586(t_small_parse_table_array *v)
{
	v->a[191720] = anon_sym_AMP_GT_GT;
	v->a[191721] = anon_sym_LT_AMP;
	v->a[191722] = anon_sym_GT_AMP;
	v->a[191723] = anon_sym_GT_PIPE;
	v->a[191724] = anon_sym_LT_AMP_DASH;
	v->a[191725] = anon_sym_GT_AMP_DASH;
	v->a[191726] = anon_sym_LT_LT_DASH;
	v->a[191727] = aux_sym_heredoc_redirect_token1;
	v->a[191728] = anon_sym_LT_LT_LT;
	v->a[191729] = 5;
	v->a[191730] = actions(71);
	v->a[191731] = 1;
	v->a[191732] = sym_comment;
	v->a[191733] = actions(8552);
	v->a[191734] = 1;
	v->a[191735] = sym__special_character;
	v->a[191736] = state(3544);
	v->a[191737] = 1;
	v->a[191738] = aux_sym__literal_repeat1;
	v->a[191739] = actions(5067);
	small_parse_table_9587(v);
}

void	small_parse_table_9587(t_small_parse_table_array *v)
{
	v->a[191740] = 10;
	v->a[191741] = anon_sym_LT;
	v->a[191742] = anon_sym_GT;
	v->a[191743] = anon_sym_AMP_GT;
	v->a[191744] = anon_sym_LT_AMP;
	v->a[191745] = anon_sym_GT_AMP;
	v->a[191746] = anon_sym_DOLLAR;
	v->a[191747] = aux_sym_number_token1;
	v->a[191748] = aux_sym_number_token2;
	v->a[191749] = anon_sym_DOLLAR_LPAREN;
	v->a[191750] = sym_word;
	v->a[191751] = actions(5069);
	v->a[191752] = 21;
	v->a[191753] = sym_file_descriptor;
	v->a[191754] = sym_variable_name;
	v->a[191755] = sym_test_operator;
	v->a[191756] = sym__brace_start;
	v->a[191757] = anon_sym_LPAREN_LPAREN;
	v->a[191758] = anon_sym_GT_GT;
	v->a[191759] = anon_sym_AMP_GT_GT;
	small_parse_table_9588(v);
}

void	small_parse_table_9588(t_small_parse_table_array *v)
{
	v->a[191760] = anon_sym_GT_PIPE;
	v->a[191761] = anon_sym_LT_AMP_DASH;
	v->a[191762] = anon_sym_GT_AMP_DASH;
	v->a[191763] = anon_sym_LT_LT_LT;
	v->a[191764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[191765] = anon_sym_DOLLAR_LBRACK;
	v->a[191766] = anon_sym_DQUOTE;
	v->a[191767] = sym_raw_string;
	v->a[191768] = sym_ansi_c_string;
	v->a[191769] = anon_sym_DOLLAR_LBRACE;
	v->a[191770] = anon_sym_BQUOTE;
	v->a[191771] = anon_sym_DOLLAR_BQUOTE;
	v->a[191772] = anon_sym_LT_LPAREN;
	v->a[191773] = anon_sym_GT_LPAREN;
	v->a[191774] = 8;
	v->a[191775] = actions(3);
	v->a[191776] = 1;
	v->a[191777] = sym_comment;
	v->a[191778] = actions(1241);
	v->a[191779] = 1;
	small_parse_table_9589(v);
}

void	small_parse_table_9589(t_small_parse_table_array *v)
{
	v->a[191780] = sym_file_descriptor;
	v->a[191781] = actions(8556);
	v->a[191782] = 1;
	v->a[191783] = anon_sym_DQUOTE;
	v->a[191784] = actions(8560);
	v->a[191785] = 1;
	v->a[191786] = sym_variable_name;
	v->a[191787] = state(5364);
	v->a[191788] = 1;
	v->a[191789] = sym_string;
	v->a[191790] = actions(8558);
	v->a[191791] = 2;
	v->a[191792] = aux_sym__simple_variable_name_token1;
	v->a[191793] = aux_sym__multiline_variable_name_token1;
	v->a[191794] = actions(8554);
	v->a[191795] = 9;
	v->a[191796] = anon_sym_DASH;
	v->a[191797] = anon_sym_STAR;
	v->a[191798] = anon_sym_BANG;
	v->a[191799] = anon_sym_QMARK;
	small_parse_table_9590(v);
}

/* EOF small_parse_table_1917.c */
