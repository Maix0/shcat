/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_245.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1225(t_small_parse_table_array *v)
{
	v->a[24500] = sym_raw_string;
	v->a[24501] = aux_sym_number_token1;
	v->a[24502] = aux_sym_number_token2;
	v->a[24503] = anon_sym_DOLLAR_LBRACE;
	v->a[24504] = anon_sym_DOLLAR_LPAREN;
	v->a[24505] = anon_sym_BQUOTE;
	v->a[24506] = anon_sym_DOLLAR_BQUOTE;
	v->a[24507] = sym_word;
	v->a[24508] = anon_sym_SEMI;
	v->a[24509] = 6;
	v->a[24510] = actions(3);
	v->a[24511] = 1;
	v->a[24512] = sym_comment;
	v->a[24513] = actions(3155);
	v->a[24514] = 1;
	v->a[24515] = sym_variable_name;
	v->a[24516] = actions(3153);
	v->a[24517] = 2;
	v->a[24518] = aux_sym__simple_variable_name_token1;
	v->a[24519] = aux_sym__multiline_variable_name_token1;
	small_parse_table_1226(v);
}

void	small_parse_table_1226(t_small_parse_table_array *v)
{
	v->a[24520] = actions(816);
	v->a[24521] = 3;
	v->a[24522] = sym_file_descriptor;
	v->a[24523] = sym_test_operator;
	v->a[24524] = sym__brace_start;
	v->a[24525] = actions(3151);
	v->a[24526] = 9;
	v->a[24527] = anon_sym_BANG;
	v->a[24528] = anon_sym_DASH;
	v->a[24529] = anon_sym_STAR;
	v->a[24530] = anon_sym_QMARK;
	v->a[24531] = anon_sym_DOLLAR;
	v->a[24532] = anon_sym_POUND;
	v->a[24533] = anon_sym_AT;
	v->a[24534] = anon_sym_0;
	v->a[24535] = anon_sym__;
	v->a[24536] = actions(810);
	v->a[24537] = 27;
	v->a[24538] = anon_sym_PIPE;
	v->a[24539] = anon_sym_PIPE_AMP;
	small_parse_table_1227(v);
}

void	small_parse_table_1227(t_small_parse_table_array *v)
{
	v->a[24540] = anon_sym_AMP_AMP;
	v->a[24541] = anon_sym_PIPE_PIPE;
	v->a[24542] = anon_sym_LT;
	v->a[24543] = anon_sym_GT;
	v->a[24544] = anon_sym_GT_GT;
	v->a[24545] = anon_sym_AMP_GT;
	v->a[24546] = anon_sym_AMP_GT_GT;
	v->a[24547] = anon_sym_LT_AMP;
	v->a[24548] = anon_sym_GT_AMP;
	v->a[24549] = anon_sym_GT_PIPE;
	v->a[24550] = anon_sym_LT_AMP_DASH;
	v->a[24551] = anon_sym_GT_AMP_DASH;
	v->a[24552] = anon_sym_LT_LT;
	v->a[24553] = anon_sym_LT_LT_DASH;
	v->a[24554] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24555] = sym__special_character;
	v->a[24556] = anon_sym_DQUOTE;
	v->a[24557] = sym_raw_string;
	v->a[24558] = aux_sym_number_token1;
	v->a[24559] = aux_sym_number_token2;
	small_parse_table_1228(v);
}

void	small_parse_table_1228(t_small_parse_table_array *v)
{
	v->a[24560] = anon_sym_DOLLAR_LBRACE;
	v->a[24561] = anon_sym_DOLLAR_LPAREN;
	v->a[24562] = anon_sym_BQUOTE;
	v->a[24563] = anon_sym_DOLLAR_BQUOTE;
	v->a[24564] = sym_word;
	v->a[24565] = 3;
	v->a[24566] = actions(3);
	v->a[24567] = 1;
	v->a[24568] = sym_comment;
	v->a[24569] = actions(2774);
	v->a[24570] = 6;
	v->a[24571] = sym_file_descriptor;
	v->a[24572] = sym__concat;
	v->a[24573] = sym_variable_name;
	v->a[24574] = sym_test_operator;
	v->a[24575] = sym__brace_start;
	v->a[24576] = aux_sym_heredoc_redirect_token1;
	v->a[24577] = actions(2772);
	v->a[24578] = 36;
	v->a[24579] = anon_sym_esac;
	small_parse_table_1229(v);
}

void	small_parse_table_1229(t_small_parse_table_array *v)
{
	v->a[24580] = anon_sym_PIPE;
	v->a[24581] = anon_sym_SEMI_SEMI;
	v->a[24582] = anon_sym_SEMI_AMP;
	v->a[24583] = anon_sym_SEMI_SEMI_AMP;
	v->a[24584] = anon_sym_PIPE_AMP;
	v->a[24585] = anon_sym_AMP_AMP;
	v->a[24586] = anon_sym_PIPE_PIPE;
	v->a[24587] = anon_sym_LT;
	v->a[24588] = anon_sym_GT;
	v->a[24589] = anon_sym_GT_GT;
	v->a[24590] = anon_sym_AMP_GT;
	v->a[24591] = anon_sym_AMP_GT_GT;
	v->a[24592] = anon_sym_LT_AMP;
	v->a[24593] = anon_sym_GT_AMP;
	v->a[24594] = anon_sym_GT_PIPE;
	v->a[24595] = anon_sym_LT_AMP_DASH;
	v->a[24596] = anon_sym_GT_AMP_DASH;
	v->a[24597] = anon_sym_LT_LT;
	v->a[24598] = anon_sym_LT_LT_DASH;
	v->a[24599] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1230(v);
}

/* EOF small_parse_table_245.c */
