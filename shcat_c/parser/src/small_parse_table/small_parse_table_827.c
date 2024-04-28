/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_827.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4135(t_small_parse_table_array *v)
{
	v->a[82700] = sym_variable_name;
	v->a[82701] = sym_test_operator;
	v->a[82702] = sym__brace_start;
	v->a[82703] = aux_sym_heredoc_redirect_token1;
	v->a[82704] = actions(1362);
	v->a[82705] = 37;
	v->a[82706] = anon_sym_LPAREN_LPAREN;
	v->a[82707] = anon_sym_SEMI;
	v->a[82708] = anon_sym_PIPE_PIPE;
	v->a[82709] = anon_sym_AMP_AMP;
	v->a[82710] = anon_sym_PIPE;
	v->a[82711] = anon_sym_AMP;
	v->a[82712] = anon_sym_LT;
	v->a[82713] = anon_sym_GT;
	v->a[82714] = anon_sym_LT_LT;
	v->a[82715] = anon_sym_GT_GT;
	v->a[82716] = anon_sym_RPAREN;
	v->a[82717] = anon_sym_SEMI_SEMI;
	v->a[82718] = anon_sym_PIPE_AMP;
	v->a[82719] = anon_sym_AMP_GT;
	small_parse_table_4136(v);
}

void	small_parse_table_4136(t_small_parse_table_array *v)
{
	v->a[82720] = anon_sym_AMP_GT_GT;
	v->a[82721] = anon_sym_LT_AMP;
	v->a[82722] = anon_sym_GT_AMP;
	v->a[82723] = anon_sym_GT_PIPE;
	v->a[82724] = anon_sym_LT_AMP_DASH;
	v->a[82725] = anon_sym_GT_AMP_DASH;
	v->a[82726] = anon_sym_LT_LT_DASH;
	v->a[82727] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82728] = anon_sym_DOLLAR_LBRACK;
	v->a[82729] = anon_sym_DOLLAR;
	v->a[82730] = anon_sym_DQUOTE;
	v->a[82731] = sym_raw_string;
	v->a[82732] = sym_ansi_c_string;
	v->a[82733] = aux_sym_number_token1;
	v->a[82734] = aux_sym_number_token2;
	v->a[82735] = anon_sym_DOLLAR_LBRACE;
	v->a[82736] = anon_sym_DOLLAR_LPAREN;
	v->a[82737] = anon_sym_BQUOTE;
	v->a[82738] = anon_sym_DOLLAR_BQUOTE;
	v->a[82739] = anon_sym_LT_LPAREN;
	small_parse_table_4137(v);
}

void	small_parse_table_4137(t_small_parse_table_array *v)
{
	v->a[82740] = anon_sym_GT_LPAREN;
	v->a[82741] = aux_sym__simple_variable_name_token1;
	v->a[82742] = sym_word;
	v->a[82743] = 3;
	v->a[82744] = actions(3);
	v->a[82745] = 1;
	v->a[82746] = sym_comment;
	v->a[82747] = actions(1350);
	v->a[82748] = 5;
	v->a[82749] = sym_file_descriptor;
	v->a[82750] = sym__concat;
	v->a[82751] = sym_test_operator;
	v->a[82752] = sym__brace_start;
	v->a[82753] = aux_sym_heredoc_redirect_token1;
	v->a[82754] = actions(1348);
	v->a[82755] = 39;
	v->a[82756] = anon_sym_LPAREN_LPAREN;
	v->a[82757] = anon_sym_SEMI;
	v->a[82758] = anon_sym_PIPE_PIPE;
	v->a[82759] = anon_sym_AMP_AMP;
	small_parse_table_4138(v);
}

void	small_parse_table_4138(t_small_parse_table_array *v)
{
	v->a[82760] = anon_sym_PIPE;
	v->a[82761] = anon_sym_AMP;
	v->a[82762] = anon_sym_LT;
	v->a[82763] = anon_sym_GT;
	v->a[82764] = anon_sym_LT_LT;
	v->a[82765] = anon_sym_GT_GT;
	v->a[82766] = anon_sym_RPAREN;
	v->a[82767] = anon_sym_SEMI_SEMI;
	v->a[82768] = anon_sym_PIPE_AMP;
	v->a[82769] = anon_sym_AMP_GT;
	v->a[82770] = anon_sym_AMP_GT_GT;
	v->a[82771] = anon_sym_LT_AMP;
	v->a[82772] = anon_sym_GT_AMP;
	v->a[82773] = anon_sym_GT_PIPE;
	v->a[82774] = anon_sym_LT_AMP_DASH;
	v->a[82775] = anon_sym_GT_AMP_DASH;
	v->a[82776] = anon_sym_LT_LT_DASH;
	v->a[82777] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82778] = anon_sym_DOLLAR_LBRACK;
	v->a[82779] = aux_sym_concatenation_token1;
	small_parse_table_4139(v);
}

void	small_parse_table_4139(t_small_parse_table_array *v)
{
	v->a[82780] = anon_sym_DOLLAR;
	v->a[82781] = sym__special_character;
	v->a[82782] = anon_sym_DQUOTE;
	v->a[82783] = sym_raw_string;
	v->a[82784] = sym_ansi_c_string;
	v->a[82785] = aux_sym_number_token1;
	v->a[82786] = aux_sym_number_token2;
	v->a[82787] = anon_sym_DOLLAR_LBRACE;
	v->a[82788] = anon_sym_DOLLAR_LPAREN;
	v->a[82789] = anon_sym_BQUOTE;
	v->a[82790] = anon_sym_DOLLAR_BQUOTE;
	v->a[82791] = anon_sym_LT_LPAREN;
	v->a[82792] = anon_sym_GT_LPAREN;
	v->a[82793] = aux_sym__simple_variable_name_token1;
	v->a[82794] = sym_word;
	v->a[82795] = 5;
	v->a[82796] = actions(3);
	v->a[82797] = 1;
	v->a[82798] = sym_comment;
	v->a[82799] = actions(5968);
	small_parse_table_4140(v);
}

/* EOF small_parse_table_827.c */
