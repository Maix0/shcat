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
	v->a[46700] = sym_file_descriptor;
	v->a[46701] = ts_builtin_sym_end;
	v->a[46702] = actions(762);
	v->a[46703] = 9;
	v->a[46704] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46705] = anon_sym_DOLLAR;
	v->a[46706] = anon_sym_DQUOTE;
	v->a[46707] = sym_raw_string;
	v->a[46708] = sym_number;
	v->a[46709] = anon_sym_DOLLAR_LBRACE;
	v->a[46710] = anon_sym_DOLLAR_LPAREN;
	v->a[46711] = anon_sym_BQUOTE;
	v->a[46712] = sym_word;
	v->a[46713] = actions(1594);
	v->a[46714] = 19;
	v->a[46715] = anon_sym_PIPE;
	v->a[46716] = anon_sym_SEMI_SEMI;
	v->a[46717] = anon_sym_AMP_AMP;
	v->a[46718] = anon_sym_PIPE_PIPE;
	v->a[46719] = anon_sym_LT;
	small_parse_table_2336(v);
}

void	small_parse_table_2336(t_small_parse_table_array *v)
{
	v->a[46720] = anon_sym_GT;
	v->a[46721] = anon_sym_GT_GT;
	v->a[46722] = anon_sym_AMP_GT;
	v->a[46723] = anon_sym_AMP_GT_GT;
	v->a[46724] = anon_sym_LT_AMP;
	v->a[46725] = anon_sym_GT_AMP;
	v->a[46726] = anon_sym_GT_PIPE;
	v->a[46727] = anon_sym_LT_AMP_DASH;
	v->a[46728] = anon_sym_GT_AMP_DASH;
	v->a[46729] = anon_sym_LT_LT;
	v->a[46730] = anon_sym_LT_LT_DASH;
	v->a[46731] = aux_sym_heredoc_redirect_token1;
	v->a[46732] = anon_sym_AMP;
	v->a[46733] = anon_sym_SEMI;
	v->a[46734] = 6;
	v->a[46735] = actions(3);
	v->a[46736] = 1;
	v->a[46737] = sym_comment;
	v->a[46738] = actions(959);
	v->a[46739] = 1;
	small_parse_table_2337(v);
}

void	small_parse_table_2337(t_small_parse_table_array *v)
{
	v->a[46740] = aux_sym_concatenation_token1;
	v->a[46741] = actions(1596);
	v->a[46742] = 1;
	v->a[46743] = sym__concat;
	v->a[46744] = state(293);
	v->a[46745] = 1;
	v->a[46746] = aux_sym_concatenation_repeat1;
	v->a[46747] = actions(961);
	v->a[46748] = 2;
	v->a[46749] = sym_file_descriptor;
	v->a[46750] = sym__bare_dollar;
	v->a[46751] = actions(957);
	v->a[46752] = 26;
	v->a[46753] = anon_sym_LPAREN;
	v->a[46754] = anon_sym_PIPE;
	v->a[46755] = anon_sym_AMP_AMP;
	v->a[46756] = anon_sym_PIPE_PIPE;
	v->a[46757] = anon_sym_LT;
	v->a[46758] = anon_sym_GT;
	v->a[46759] = anon_sym_GT_GT;
	small_parse_table_2338(v);
}

void	small_parse_table_2338(t_small_parse_table_array *v)
{
	v->a[46760] = anon_sym_AMP_GT;
	v->a[46761] = anon_sym_AMP_GT_GT;
	v->a[46762] = anon_sym_LT_AMP;
	v->a[46763] = anon_sym_GT_AMP;
	v->a[46764] = anon_sym_GT_PIPE;
	v->a[46765] = anon_sym_LT_AMP_DASH;
	v->a[46766] = anon_sym_GT_AMP_DASH;
	v->a[46767] = anon_sym_LT_LT;
	v->a[46768] = anon_sym_LT_LT_DASH;
	v->a[46769] = aux_sym_heredoc_redirect_token1;
	v->a[46770] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46771] = anon_sym_DOLLAR;
	v->a[46772] = anon_sym_DQUOTE;
	v->a[46773] = sym_raw_string;
	v->a[46774] = sym_number;
	v->a[46775] = anon_sym_DOLLAR_LBRACE;
	v->a[46776] = anon_sym_DOLLAR_LPAREN;
	v->a[46777] = anon_sym_BQUOTE;
	v->a[46778] = sym_word;
	v->a[46779] = 3;
	small_parse_table_2339(v);
}

void	small_parse_table_2339(t_small_parse_table_array *v)
{
	v->a[46780] = actions(3);
	v->a[46781] = 1;
	v->a[46782] = sym_comment;
	v->a[46783] = actions(1094);
	v->a[46784] = 2;
	v->a[46785] = sym_file_descriptor;
	v->a[46786] = sym_variable_name;
	v->a[46787] = actions(1090);
	v->a[46788] = 29;
	v->a[46789] = anon_sym_esac;
	v->a[46790] = anon_sym_PIPE;
	v->a[46791] = anon_sym_SEMI_SEMI;
	v->a[46792] = anon_sym_AMP_AMP;
	v->a[46793] = anon_sym_PIPE_PIPE;
	v->a[46794] = anon_sym_LT;
	v->a[46795] = anon_sym_GT;
	v->a[46796] = anon_sym_GT_GT;
	v->a[46797] = anon_sym_AMP_GT;
	v->a[46798] = anon_sym_AMP_GT_GT;
	v->a[46799] = anon_sym_LT_AMP;
	small_parse_table_2340(v);
}

/* EOF small_parse_table_467.c */
