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
	v->a[26500] = anon_sym_PIPE;
	v->a[26501] = actions(690);
	v->a[26502] = 1;
	v->a[26503] = sym_file_descriptor;
	v->a[26504] = actions(695);
	v->a[26505] = 1;
	v->a[26506] = anon_sym_SEMI_SEMI;
	v->a[26507] = actions(926);
	v->a[26508] = 1;
	v->a[26509] = sym_variable_name;
	v->a[26510] = state(766);
	v->a[26511] = 1;
	v->a[26512] = sym_terminator;
	v->a[26513] = actions(754);
	v->a[26514] = 2;
	v->a[26515] = anon_sym_LT_LT;
	v->a[26516] = anon_sym_LT_LT_DASH;
	v->a[26517] = actions(924);
	v->a[26518] = 2;
	v->a[26519] = anon_sym_AMP_AMP;
	small_parse_table_1326(v);
}

void	small_parse_table_1326(t_small_parse_table_array *v)
{
	v->a[26520] = anon_sym_PIPE_PIPE;
	v->a[26521] = state(1298);
	v->a[26522] = 2;
	v->a[26523] = sym_variable_assignment;
	v->a[26524] = aux_sym__variable_assignments_repeat1;
	v->a[26525] = actions(750);
	v->a[26526] = 3;
	v->a[26527] = aux_sym_heredoc_redirect_token1;
	v->a[26528] = anon_sym_AMP;
	v->a[26529] = anon_sym_SEMI;
	v->a[26530] = state(1268);
	v->a[26531] = 3;
	v->a[26532] = sym_file_redirect;
	v->a[26533] = sym_heredoc_redirect;
	v->a[26534] = aux_sym_redirected_statement_repeat1;
	v->a[26535] = actions(678);
	v->a[26536] = 17;
	v->a[26537] = anon_sym_LT;
	v->a[26538] = anon_sym_GT;
	v->a[26539] = anon_sym_GT_GT;
	small_parse_table_1327(v);
}

void	small_parse_table_1327(t_small_parse_table_array *v)
{
	v->a[26540] = anon_sym_LT_AMP;
	v->a[26541] = anon_sym_GT_AMP;
	v->a[26542] = anon_sym_GT_PIPE;
	v->a[26543] = anon_sym_LT_AMP_DASH;
	v->a[26544] = anon_sym_GT_AMP_DASH;
	v->a[26545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26546] = anon_sym_DOLLAR;
	v->a[26547] = anon_sym_DQUOTE;
	v->a[26548] = sym_raw_string;
	v->a[26549] = sym_number;
	v->a[26550] = anon_sym_DOLLAR_LBRACE;
	v->a[26551] = anon_sym_DOLLAR_LPAREN;
	v->a[26552] = anon_sym_BQUOTE;
	v->a[26553] = sym_word;
	v->a[26554] = 7;
	v->a[26555] = actions(3);
	v->a[26556] = 1;
	v->a[26557] = sym_comment;
	v->a[26558] = actions(692);
	v->a[26559] = 1;
	small_parse_table_1328(v);
}

void	small_parse_table_1328(t_small_parse_table_array *v)
{
	v->a[26560] = sym_variable_name;
	v->a[26561] = actions(976);
	v->a[26562] = 1;
	v->a[26563] = sym_file_descriptor;
	v->a[26564] = state(1174);
	v->a[26565] = 2;
	v->a[26566] = sym_variable_assignment;
	v->a[26567] = aux_sym__variable_assignments_repeat1;
	v->a[26568] = state(1176);
	v->a[26569] = 3;
	v->a[26570] = sym_file_redirect;
	v->a[26571] = sym_heredoc_redirect;
	v->a[26572] = aux_sym_redirected_statement_repeat1;
	v->a[26573] = actions(678);
	v->a[26574] = 9;
	v->a[26575] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26576] = anon_sym_DOLLAR;
	v->a[26577] = anon_sym_DQUOTE;
	v->a[26578] = sym_raw_string;
	v->a[26579] = sym_number;
	small_parse_table_1329(v);
}

void	small_parse_table_1329(t_small_parse_table_array *v)
{
	v->a[26580] = anon_sym_DOLLAR_LBRACE;
	v->a[26581] = anon_sym_DOLLAR_LPAREN;
	v->a[26582] = anon_sym_BQUOTE;
	v->a[26583] = sym_word;
	v->a[26584] = actions(682);
	v->a[26585] = 18;
	v->a[26586] = anon_sym_esac;
	v->a[26587] = anon_sym_PIPE;
	v->a[26588] = anon_sym_SEMI_SEMI;
	v->a[26589] = anon_sym_AMP_AMP;
	v->a[26590] = anon_sym_PIPE_PIPE;
	v->a[26591] = anon_sym_LT;
	v->a[26592] = anon_sym_GT;
	v->a[26593] = anon_sym_GT_GT;
	v->a[26594] = anon_sym_LT_AMP;
	v->a[26595] = anon_sym_GT_AMP;
	v->a[26596] = anon_sym_GT_PIPE;
	v->a[26597] = anon_sym_LT_AMP_DASH;
	v->a[26598] = anon_sym_GT_AMP_DASH;
	v->a[26599] = anon_sym_LT_LT;
	small_parse_table_1330(v);
}

/* EOF small_parse_table_265.c */
