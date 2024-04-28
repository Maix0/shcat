/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_467.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2335(t_small_parse_table_array *v)
{
	v->a[46700] = sym_expansion;
	v->a[46701] = sym_command_substitution;
	v->a[46702] = sym_process_substitution;
	v->a[46703] = actions(2494);
	v->a[46704] = 16;
	v->a[46705] = anon_sym_PIPE_PIPE;
	v->a[46706] = anon_sym_AMP_AMP;
	v->a[46707] = anon_sym_PIPE;
	v->a[46708] = anon_sym_LT;
	v->a[46709] = anon_sym_GT;
	v->a[46710] = anon_sym_LT_LT;
	v->a[46711] = anon_sym_GT_GT;
	v->a[46712] = anon_sym_PIPE_AMP;
	v->a[46713] = anon_sym_AMP_GT;
	v->a[46714] = anon_sym_AMP_GT_GT;
	v->a[46715] = anon_sym_LT_AMP;
	v->a[46716] = anon_sym_GT_AMP;
	v->a[46717] = anon_sym_GT_PIPE;
	v->a[46718] = anon_sym_LT_AMP_DASH;
	v->a[46719] = anon_sym_GT_AMP_DASH;
	small_parse_table_2336(v);
}

void	small_parse_table_2336(t_small_parse_table_array *v)
{
	v->a[46720] = anon_sym_LT_LT_DASH;
	v->a[46721] = 3;
	v->a[46722] = actions(3);
	v->a[46723] = 1;
	v->a[46724] = sym_comment;
	v->a[46725] = actions(1338);
	v->a[46726] = 7;
	v->a[46727] = sym_file_descriptor;
	v->a[46728] = sym__concat;
	v->a[46729] = sym_test_operator;
	v->a[46730] = sym__bare_dollar;
	v->a[46731] = sym__brace_start;
	v->a[46732] = ts_builtin_sym_end;
	v->a[46733] = aux_sym_heredoc_redirect_token1;
	v->a[46734] = actions(1336);
	v->a[46735] = 41;
	v->a[46736] = anon_sym_LPAREN_LPAREN;
	v->a[46737] = anon_sym_SEMI;
	v->a[46738] = anon_sym_PIPE_PIPE;
	v->a[46739] = anon_sym_AMP_AMP;
	small_parse_table_2337(v);
}

void	small_parse_table_2337(t_small_parse_table_array *v)
{
	v->a[46740] = anon_sym_PIPE;
	v->a[46741] = anon_sym_AMP;
	v->a[46742] = anon_sym_EQ_EQ;
	v->a[46743] = anon_sym_LT;
	v->a[46744] = anon_sym_GT;
	v->a[46745] = anon_sym_LT_LT;
	v->a[46746] = anon_sym_GT_GT;
	v->a[46747] = anon_sym_LPAREN;
	v->a[46748] = anon_sym_SEMI_SEMI;
	v->a[46749] = anon_sym_PIPE_AMP;
	v->a[46750] = anon_sym_EQ_TILDE;
	v->a[46751] = anon_sym_AMP_GT;
	v->a[46752] = anon_sym_AMP_GT_GT;
	v->a[46753] = anon_sym_LT_AMP;
	v->a[46754] = anon_sym_GT_AMP;
	v->a[46755] = anon_sym_GT_PIPE;
	v->a[46756] = anon_sym_LT_AMP_DASH;
	v->a[46757] = anon_sym_GT_AMP_DASH;
	v->a[46758] = anon_sym_LT_LT_DASH;
	v->a[46759] = anon_sym_LT_LT_LT;
	small_parse_table_2338(v);
}

void	small_parse_table_2338(t_small_parse_table_array *v)
{
	v->a[46760] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46761] = anon_sym_DOLLAR_LBRACK;
	v->a[46762] = aux_sym_concatenation_token1;
	v->a[46763] = anon_sym_DOLLAR;
	v->a[46764] = sym__special_character;
	v->a[46765] = anon_sym_DQUOTE;
	v->a[46766] = sym_raw_string;
	v->a[46767] = sym_ansi_c_string;
	v->a[46768] = aux_sym_number_token1;
	v->a[46769] = aux_sym_number_token2;
	v->a[46770] = anon_sym_DOLLAR_LBRACE;
	v->a[46771] = anon_sym_DOLLAR_LPAREN;
	v->a[46772] = anon_sym_BQUOTE;
	v->a[46773] = anon_sym_DOLLAR_BQUOTE;
	v->a[46774] = anon_sym_LT_LPAREN;
	v->a[46775] = anon_sym_GT_LPAREN;
	v->a[46776] = sym_word;
	v->a[46777] = 3;
	v->a[46778] = actions(3);
	v->a[46779] = 1;
	small_parse_table_2339(v);
}

void	small_parse_table_2339(t_small_parse_table_array *v)
{
	v->a[46780] = sym_comment;
	v->a[46781] = actions(1330);
	v->a[46782] = 7;
	v->a[46783] = sym_file_descriptor;
	v->a[46784] = sym__concat;
	v->a[46785] = sym_test_operator;
	v->a[46786] = sym__bare_dollar;
	v->a[46787] = sym__brace_start;
	v->a[46788] = ts_builtin_sym_end;
	v->a[46789] = aux_sym_heredoc_redirect_token1;
	v->a[46790] = actions(1328);
	v->a[46791] = 41;
	v->a[46792] = anon_sym_LPAREN_LPAREN;
	v->a[46793] = anon_sym_SEMI;
	v->a[46794] = anon_sym_PIPE_PIPE;
	v->a[46795] = anon_sym_AMP_AMP;
	v->a[46796] = anon_sym_PIPE;
	v->a[46797] = anon_sym_AMP;
	v->a[46798] = anon_sym_EQ_EQ;
	v->a[46799] = anon_sym_LT;
	small_parse_table_2340(v);
}

/* EOF small_parse_table_467.c */
