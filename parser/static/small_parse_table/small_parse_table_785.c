/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_785.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3925(t_small_parse_table_array *v)
{
	v->a[78500] = anon_sym_POUND;
	v->a[78501] = anon_sym_AT;
	v->a[78502] = anon_sym_0;
	v->a[78503] = anon_sym__;
	v->a[78504] = actions(810);
	v->a[78505] = 20;
	v->a[78506] = anon_sym_PIPE;
	v->a[78507] = anon_sym_SEMI_SEMI;
	v->a[78508] = anon_sym_PIPE_AMP;
	v->a[78509] = anon_sym_AMP_AMP;
	v->a[78510] = anon_sym_PIPE_PIPE;
	v->a[78511] = anon_sym_LT;
	v->a[78512] = anon_sym_GT;
	v->a[78513] = anon_sym_GT_GT;
	v->a[78514] = anon_sym_AMP_GT;
	v->a[78515] = anon_sym_AMP_GT_GT;
	v->a[78516] = anon_sym_LT_AMP;
	v->a[78517] = anon_sym_GT_AMP;
	v->a[78518] = anon_sym_GT_PIPE;
	v->a[78519] = anon_sym_LT_AMP_DASH;
	small_parse_table_3926(v);
}

void	small_parse_table_3926(t_small_parse_table_array *v)
{
	v->a[78520] = anon_sym_GT_AMP_DASH;
	v->a[78521] = anon_sym_LT_LT;
	v->a[78522] = anon_sym_LT_LT_DASH;
	v->a[78523] = aux_sym_heredoc_redirect_token1;
	v->a[78524] = anon_sym_AMP;
	v->a[78525] = anon_sym_SEMI;
	v->a[78526] = 3;
	v->a[78527] = actions(57);
	v->a[78528] = 1;
	v->a[78529] = sym_comment;
	v->a[78530] = actions(3018);
	v->a[78531] = 13;
	v->a[78532] = anon_sym_PIPE;
	v->a[78533] = anon_sym_LT;
	v->a[78534] = anon_sym_GT;
	v->a[78535] = anon_sym_AMP_GT;
	v->a[78536] = anon_sym_LT_AMP;
	v->a[78537] = anon_sym_GT_AMP;
	v->a[78538] = anon_sym_LT_LT;
	v->a[78539] = anon_sym_DOLLAR;
	small_parse_table_3927(v);
}

void	small_parse_table_3927(t_small_parse_table_array *v)
{
	v->a[78540] = aux_sym_number_token1;
	v->a[78541] = aux_sym_number_token2;
	v->a[78542] = anon_sym_DOLLAR_LPAREN;
	v->a[78543] = anon_sym_BQUOTE;
	v->a[78544] = sym_word;
	v->a[78545] = actions(3020);
	v->a[78546] = 20;
	v->a[78547] = sym_file_descriptor;
	v->a[78548] = sym__concat;
	v->a[78549] = sym_test_operator;
	v->a[78550] = sym__brace_start;
	v->a[78551] = anon_sym_PIPE_AMP;
	v->a[78552] = anon_sym_AMP_AMP;
	v->a[78553] = anon_sym_PIPE_PIPE;
	v->a[78554] = anon_sym_GT_GT;
	v->a[78555] = anon_sym_AMP_GT_GT;
	v->a[78556] = anon_sym_GT_PIPE;
	v->a[78557] = anon_sym_LT_AMP_DASH;
	v->a[78558] = anon_sym_GT_AMP_DASH;
	v->a[78559] = anon_sym_LT_LT_DASH;
	small_parse_table_3928(v);
}

void	small_parse_table_3928(t_small_parse_table_array *v)
{
	v->a[78560] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78561] = aux_sym_concatenation_token1;
	v->a[78562] = sym__special_character;
	v->a[78563] = anon_sym_DQUOTE;
	v->a[78564] = sym_raw_string;
	v->a[78565] = anon_sym_DOLLAR_LBRACE;
	v->a[78566] = anon_sym_DOLLAR_BQUOTE;
	v->a[78567] = 6;
	v->a[78568] = actions(3);
	v->a[78569] = 1;
	v->a[78570] = sym_comment;
	v->a[78571] = actions(828);
	v->a[78572] = 1;
	v->a[78573] = sym_file_descriptor;
	v->a[78574] = actions(4412);
	v->a[78575] = 1;
	v->a[78576] = sym_variable_name;
	v->a[78577] = actions(4410);
	v->a[78578] = 2;
	v->a[78579] = aux_sym__simple_variable_name_token1;
	small_parse_table_3929(v);
}

void	small_parse_table_3929(t_small_parse_table_array *v)
{
	v->a[78580] = aux_sym__multiline_variable_name_token1;
	v->a[78581] = actions(4408);
	v->a[78582] = 9;
	v->a[78583] = anon_sym_BANG;
	v->a[78584] = anon_sym_DASH;
	v->a[78585] = anon_sym_STAR;
	v->a[78586] = anon_sym_QMARK;
	v->a[78587] = anon_sym_DOLLAR;
	v->a[78588] = anon_sym_POUND;
	v->a[78589] = anon_sym_AT;
	v->a[78590] = anon_sym_0;
	v->a[78591] = anon_sym__;
	v->a[78592] = actions(826);
	v->a[78593] = 20;
	v->a[78594] = anon_sym_PIPE;
	v->a[78595] = anon_sym_SEMI_SEMI;
	v->a[78596] = anon_sym_PIPE_AMP;
	v->a[78597] = anon_sym_AMP_AMP;
	v->a[78598] = anon_sym_PIPE_PIPE;
	v->a[78599] = anon_sym_LT;
	small_parse_table_3930(v);
}

/* EOF small_parse_table_785.c */
