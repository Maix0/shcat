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
	v->a[59500] = actions(997);
	v->a[59501] = 2;
	v->a[59502] = sym_file_descriptor;
	v->a[59503] = aux_sym_heredoc_redirect_token1;
	v->a[59504] = state(1094);
	v->a[59505] = 3;
	v->a[59506] = sym_file_redirect;
	v->a[59507] = sym_heredoc_redirect;
	v->a[59508] = aux_sym_redirected_statement_repeat1;
	v->a[59509] = actions(960);
	v->a[59510] = 16;
	v->a[59511] = anon_sym_esac;
	v->a[59512] = anon_sym_PIPE;
	v->a[59513] = anon_sym_SEMI_SEMI;
	v->a[59514] = anon_sym_AMP_AMP;
	v->a[59515] = anon_sym_PIPE_PIPE;
	v->a[59516] = anon_sym_LT;
	v->a[59517] = anon_sym_GT;
	v->a[59518] = anon_sym_GT_GT;
	v->a[59519] = anon_sym_LT_AMP;
	small_parse_table_2976(v);
}

void	small_parse_table_2976(t_small_parse_table_array *v)
{
	v->a[59520] = anon_sym_GT_AMP;
	v->a[59521] = anon_sym_GT_PIPE;
	v->a[59522] = anon_sym_LT_GT;
	v->a[59523] = anon_sym_LT_LT;
	v->a[59524] = anon_sym_LT_LT_DASH;
	v->a[59525] = anon_sym_AMP;
	v->a[59526] = anon_sym_SEMI;
	v->a[59527] = 5;
	v->a[59528] = actions(3);
	v->a[59529] = 1;
	v->a[59530] = sym_comment;
	v->a[59531] = actions(736);
	v->a[59532] = 1;
	v->a[59533] = anon_sym_PIPE;
	v->a[59534] = actions(997);
	v->a[59535] = 2;
	v->a[59536] = sym_file_descriptor;
	v->a[59537] = aux_sym_heredoc_redirect_token1;
	v->a[59538] = state(1094);
	v->a[59539] = 3;
	small_parse_table_2977(v);
}

void	small_parse_table_2977(t_small_parse_table_array *v)
{
	v->a[59540] = sym_file_redirect;
	v->a[59541] = sym_heredoc_redirect;
	v->a[59542] = aux_sym_redirected_statement_repeat1;
	v->a[59543] = actions(960);
	v->a[59544] = 15;
	v->a[59545] = anon_sym_esac;
	v->a[59546] = anon_sym_SEMI_SEMI;
	v->a[59547] = anon_sym_AMP_AMP;
	v->a[59548] = anon_sym_PIPE_PIPE;
	v->a[59549] = anon_sym_LT;
	v->a[59550] = anon_sym_GT;
	v->a[59551] = anon_sym_GT_GT;
	v->a[59552] = anon_sym_LT_AMP;
	v->a[59553] = anon_sym_GT_AMP;
	v->a[59554] = anon_sym_GT_PIPE;
	v->a[59555] = anon_sym_LT_GT;
	v->a[59556] = anon_sym_LT_LT;
	v->a[59557] = anon_sym_LT_LT_DASH;
	v->a[59558] = anon_sym_AMP;
	v->a[59559] = anon_sym_SEMI;
	small_parse_table_2978(v);
}

void	small_parse_table_2978(t_small_parse_table_array *v)
{
	v->a[59560] = 5;
	v->a[59561] = actions(3);
	v->a[59562] = 1;
	v->a[59563] = sym_comment;
	v->a[59564] = actions(1817);
	v->a[59565] = 1;
	v->a[59566] = sym_variable_name;
	v->a[59567] = actions(1815);
	v->a[59568] = 2;
	v->a[59569] = aux_sym__simple_variable_name_token1;
	v->a[59570] = aux_sym__multiline_variable_name_token1;
	v->a[59571] = actions(361);
	v->a[59572] = 9;
	v->a[59573] = aux_sym_heredoc_redirect_token1;
	v->a[59574] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59575] = anon_sym_DQUOTE;
	v->a[59576] = sym_raw_string;
	v->a[59577] = sym_number;
	v->a[59578] = anon_sym_DOLLAR_LBRACE;
	v->a[59579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2979(v);
}

void	small_parse_table_2979(t_small_parse_table_array *v)
{
	v->a[59580] = anon_sym_BQUOTE;
	v->a[59581] = sym_word;
	v->a[59582] = actions(1813);
	v->a[59583] = 9;
	v->a[59584] = anon_sym_BANG;
	v->a[59585] = anon_sym_DASH;
	v->a[59586] = anon_sym_STAR;
	v->a[59587] = anon_sym_QMARK;
	v->a[59588] = anon_sym_DOLLAR;
	v->a[59589] = anon_sym_POUND;
	v->a[59590] = anon_sym_AT;
	v->a[59591] = anon_sym_0;
	v->a[59592] = anon_sym__;
	v->a[59593] = 7;
	v->a[59594] = actions(3);
	v->a[59595] = 1;
	v->a[59596] = sym_comment;
	v->a[59597] = actions(1841);
	v->a[59598] = 1;
	v->a[59599] = sym_file_descriptor;
	small_parse_table_2980(v);
}

/* EOF small_parse_table_595.c */
