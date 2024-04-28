/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1335.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6675(t_small_parse_table_array *v)
{
	v->a[133500] = aux_sym_number_token1;
	v->a[133501] = aux_sym_number_token2;
	v->a[133502] = anon_sym_DOLLAR_LPAREN;
	v->a[133503] = anon_sym_BQUOTE;
	v->a[133504] = sym_word;
	v->a[133505] = actions(1306);
	v->a[133506] = 27;
	v->a[133507] = sym_file_descriptor;
	v->a[133508] = sym__concat;
	v->a[133509] = sym_variable_name;
	v->a[133510] = sym_test_operator;
	v->a[133511] = sym__brace_start;
	v->a[133512] = anon_sym_LPAREN_LPAREN;
	v->a[133513] = anon_sym_PIPE_PIPE;
	v->a[133514] = anon_sym_AMP_AMP;
	v->a[133515] = anon_sym_GT_GT;
	v->a[133516] = anon_sym_PIPE_AMP;
	v->a[133517] = anon_sym_AMP_GT_GT;
	v->a[133518] = anon_sym_GT_PIPE;
	v->a[133519] = anon_sym_LT_AMP_DASH;
	small_parse_table_6676(v);
}

void	small_parse_table_6676(t_small_parse_table_array *v)
{
	v->a[133520] = anon_sym_GT_AMP_DASH;
	v->a[133521] = anon_sym_LT_LT_DASH;
	v->a[133522] = anon_sym_LT_LT_LT;
	v->a[133523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[133524] = anon_sym_DOLLAR_LBRACK;
	v->a[133525] = aux_sym_concatenation_token1;
	v->a[133526] = sym__special_character;
	v->a[133527] = anon_sym_DQUOTE;
	v->a[133528] = sym_raw_string;
	v->a[133529] = sym_ansi_c_string;
	v->a[133530] = anon_sym_DOLLAR_LBRACE;
	v->a[133531] = anon_sym_DOLLAR_BQUOTE;
	v->a[133532] = anon_sym_LT_LPAREN;
	v->a[133533] = anon_sym_GT_LPAREN;
	v->a[133534] = 6;
	v->a[133535] = actions(71);
	v->a[133536] = 1;
	v->a[133537] = sym_comment;
	v->a[133538] = actions(6664);
	v->a[133539] = 1;
	small_parse_table_6677(v);
}

void	small_parse_table_6677(t_small_parse_table_array *v)
{
	v->a[133540] = aux_sym_concatenation_token1;
	v->a[133541] = actions(6721);
	v->a[133542] = 1;
	v->a[133543] = sym__concat;
	v->a[133544] = state(2483);
	v->a[133545] = 1;
	v->a[133546] = aux_sym_concatenation_repeat1;
	v->a[133547] = actions(1286);
	v->a[133548] = 13;
	v->a[133549] = anon_sym_PIPE;
	v->a[133550] = anon_sym_LT;
	v->a[133551] = anon_sym_GT;
	v->a[133552] = anon_sym_LT_LT;
	v->a[133553] = anon_sym_AMP_GT;
	v->a[133554] = anon_sym_LT_AMP;
	v->a[133555] = anon_sym_GT_AMP;
	v->a[133556] = anon_sym_DOLLAR;
	v->a[133557] = aux_sym_number_token1;
	v->a[133558] = aux_sym_number_token2;
	v->a[133559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6678(v);
}

void	small_parse_table_6678(t_small_parse_table_array *v)
{
	v->a[133560] = anon_sym_BQUOTE;
	v->a[133561] = sym_word;
	v->a[133562] = actions(1288);
	v->a[133563] = 24;
	v->a[133564] = sym_file_descriptor;
	v->a[133565] = sym_test_operator;
	v->a[133566] = sym__brace_start;
	v->a[133567] = anon_sym_LPAREN_LPAREN;
	v->a[133568] = anon_sym_PIPE_PIPE;
	v->a[133569] = anon_sym_AMP_AMP;
	v->a[133570] = anon_sym_GT_GT;
	v->a[133571] = anon_sym_PIPE_AMP;
	v->a[133572] = anon_sym_AMP_GT_GT;
	v->a[133573] = anon_sym_GT_PIPE;
	v->a[133574] = anon_sym_LT_AMP_DASH;
	v->a[133575] = anon_sym_GT_AMP_DASH;
	v->a[133576] = anon_sym_LT_LT_DASH;
	v->a[133577] = anon_sym_LT_LT_LT;
	v->a[133578] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[133579] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_6679(v);
}

void	small_parse_table_6679(t_small_parse_table_array *v)
{
	v->a[133580] = sym__special_character;
	v->a[133581] = anon_sym_DQUOTE;
	v->a[133582] = sym_raw_string;
	v->a[133583] = sym_ansi_c_string;
	v->a[133584] = anon_sym_DOLLAR_LBRACE;
	v->a[133585] = anon_sym_DOLLAR_BQUOTE;
	v->a[133586] = anon_sym_LT_LPAREN;
	v->a[133587] = anon_sym_GT_LPAREN;
	v->a[133588] = 3;
	v->a[133589] = actions(71);
	v->a[133590] = 1;
	v->a[133591] = sym_comment;
	v->a[133592] = actions(1292);
	v->a[133593] = 14;
	v->a[133594] = anon_sym_PIPE;
	v->a[133595] = anon_sym_LT;
	v->a[133596] = anon_sym_GT;
	v->a[133597] = anon_sym_LT_LT;
	v->a[133598] = anon_sym_AMP_GT;
	v->a[133599] = anon_sym_LT_AMP;
	small_parse_table_6680(v);
}

/* EOF small_parse_table_1335.c */
