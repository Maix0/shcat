/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_265.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1325(t_small_parse_table_array *v)
{
	v->a[26500] = sym_word;
	v->a[26501] = state(1081);
	v->a[26502] = 6;
	v->a[26503] = sym_arithmetic_expansion;
	v->a[26504] = sym_string;
	v->a[26505] = sym_number;
	v->a[26506] = sym_simple_expansion;
	v->a[26507] = sym_expansion;
	v->a[26508] = sym_command_substitution;
	v->a[26509] = actions(748);
	v->a[26510] = 19;
	v->a[26511] = anon_sym_PIPE;
	v->a[26512] = anon_sym_SEMI_SEMI;
	v->a[26513] = anon_sym_AMP_AMP;
	v->a[26514] = anon_sym_PIPE_PIPE;
	v->a[26515] = anon_sym_LT;
	v->a[26516] = anon_sym_GT;
	v->a[26517] = anon_sym_GT_GT;
	v->a[26518] = anon_sym_AMP_GT;
	v->a[26519] = anon_sym_AMP_GT_GT;
	small_parse_table_1326(v);
}

void	small_parse_table_1326(t_small_parse_table_array *v)
{
	v->a[26520] = anon_sym_LT_AMP;
	v->a[26521] = anon_sym_GT_AMP;
	v->a[26522] = anon_sym_GT_PIPE;
	v->a[26523] = anon_sym_LT_AMP_DASH;
	v->a[26524] = anon_sym_GT_AMP_DASH;
	v->a[26525] = anon_sym_LT_LT;
	v->a[26526] = anon_sym_LT_LT_DASH;
	v->a[26527] = aux_sym_heredoc_redirect_token1;
	v->a[26528] = anon_sym_AMP;
	v->a[26529] = anon_sym_SEMI;
	v->a[26530] = 6;
	v->a[26531] = actions(3);
	v->a[26532] = 1;
	v->a[26533] = sym_comment;
	v->a[26534] = actions(413);
	v->a[26535] = 1;
	v->a[26536] = sym_file_descriptor;
	v->a[26537] = actions(481);
	v->a[26538] = 1;
	v->a[26539] = sym_variable_name;
	small_parse_table_1327(v);
}

void	small_parse_table_1327(t_small_parse_table_array *v)
{
	v->a[26540] = actions(479);
	v->a[26541] = 2;
	v->a[26542] = aux_sym__simple_variable_name_token1;
	v->a[26543] = aux_sym__multiline_variable_name_token1;
	v->a[26544] = actions(477);
	v->a[26545] = 9;
	v->a[26546] = anon_sym_BANG;
	v->a[26547] = anon_sym_DASH;
	v->a[26548] = anon_sym_STAR;
	v->a[26549] = anon_sym_QMARK;
	v->a[26550] = anon_sym_DOLLAR;
	v->a[26551] = anon_sym_POUND;
	v->a[26552] = anon_sym_AT;
	v->a[26553] = anon_sym_0;
	v->a[26554] = anon_sym__;
	v->a[26555] = actions(407);
	v->a[26556] = 25;
	v->a[26557] = anon_sym_PIPE;
	v->a[26558] = anon_sym_AMP_AMP;
	v->a[26559] = anon_sym_PIPE_PIPE;
	small_parse_table_1328(v);
}

void	small_parse_table_1328(t_small_parse_table_array *v)
{
	v->a[26560] = anon_sym_LT;
	v->a[26561] = anon_sym_GT;
	v->a[26562] = anon_sym_GT_GT;
	v->a[26563] = anon_sym_AMP_GT;
	v->a[26564] = anon_sym_AMP_GT_GT;
	v->a[26565] = anon_sym_LT_AMP;
	v->a[26566] = anon_sym_GT_AMP;
	v->a[26567] = anon_sym_GT_PIPE;
	v->a[26568] = anon_sym_LT_AMP_DASH;
	v->a[26569] = anon_sym_GT_AMP_DASH;
	v->a[26570] = anon_sym_LT_LT;
	v->a[26571] = anon_sym_LT_LT_DASH;
	v->a[26572] = aux_sym_heredoc_redirect_token1;
	v->a[26573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26574] = anon_sym_DQUOTE;
	v->a[26575] = sym_raw_string;
	v->a[26576] = aux_sym_number_token1;
	v->a[26577] = aux_sym_number_token2;
	v->a[26578] = anon_sym_DOLLAR_LBRACE;
	v->a[26579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1329(v);
}

void	small_parse_table_1329(t_small_parse_table_array *v)
{
	v->a[26580] = anon_sym_BQUOTE;
	v->a[26581] = sym_word;
	v->a[26582] = 14;
	v->a[26583] = actions(3);
	v->a[26584] = 1;
	v->a[26585] = sym_comment;
	v->a[26586] = actions(755);
	v->a[26587] = 1;
	v->a[26588] = sym_file_descriptor;
	v->a[26589] = actions(978);
	v->a[26590] = 1;
	v->a[26591] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26592] = actions(980);
	v->a[26593] = 1;
	v->a[26594] = anon_sym_DOLLAR;
	v->a[26595] = actions(982);
	v->a[26596] = 1;
	v->a[26597] = anon_sym_DQUOTE;
	v->a[26598] = actions(984);
	v->a[26599] = 1;
	small_parse_table_1330(v);
}

/* EOF small_parse_table_265.c */
