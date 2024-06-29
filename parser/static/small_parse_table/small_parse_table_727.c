/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_727.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3635(t_small_parse_table_array *v)
{
	v->a[72700] = anon_sym_GT;
	v->a[72701] = anon_sym_GT_GT;
	v->a[72702] = anon_sym_AMP_GT;
	v->a[72703] = anon_sym_AMP_GT_GT;
	v->a[72704] = anon_sym_LT_AMP;
	v->a[72705] = anon_sym_GT_AMP;
	v->a[72706] = anon_sym_GT_PIPE;
	v->a[72707] = anon_sym_LT_AMP_DASH;
	v->a[72708] = anon_sym_GT_AMP_DASH;
	v->a[72709] = anon_sym_LT_LT;
	v->a[72710] = anon_sym_LT_LT_DASH;
	v->a[72711] = anon_sym_AMP;
	v->a[72712] = anon_sym_SEMI;
	v->a[72713] = 16;
	v->a[72714] = actions(3);
	v->a[72715] = 1;
	v->a[72716] = sym_comment;
	v->a[72717] = actions(1877);
	v->a[72718] = 1;
	v->a[72719] = anon_sym_esac;
	small_parse_table_3636(v);
}

void	small_parse_table_3636(t_small_parse_table_array *v)
{
	v->a[72720] = actions(1879);
	v->a[72721] = 1;
	v->a[72722] = anon_sym_LPAREN;
	v->a[72723] = actions(1883);
	v->a[72724] = 1;
	v->a[72725] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72726] = actions(1885);
	v->a[72727] = 1;
	v->a[72728] = anon_sym_DOLLAR;
	v->a[72729] = actions(1887);
	v->a[72730] = 1;
	v->a[72731] = anon_sym_DQUOTE;
	v->a[72732] = actions(1889);
	v->a[72733] = 1;
	v->a[72734] = anon_sym_DOLLAR_LBRACE;
	v->a[72735] = actions(1891);
	v->a[72736] = 1;
	v->a[72737] = anon_sym_DOLLAR_LPAREN;
	v->a[72738] = actions(1893);
	v->a[72739] = 1;
	small_parse_table_3637(v);
}

void	small_parse_table_3637(t_small_parse_table_array *v)
{
	v->a[72740] = anon_sym_BQUOTE;
	v->a[72741] = actions(1895);
	v->a[72742] = 1;
	v->a[72743] = sym_extglob_pattern;
	v->a[72744] = state(1365);
	v->a[72745] = 1;
	v->a[72746] = aux_sym_case_statement_repeat1;
	v->a[72747] = state(1923);
	v->a[72748] = 1;
	v->a[72749] = sym_case_item;
	v->a[72750] = state(2145);
	v->a[72751] = 1;
	v->a[72752] = sym__case_item_last;
	v->a[72753] = state(2078);
	v->a[72754] = 2;
	v->a[72755] = sym_concatenation;
	v->a[72756] = sym__extglob_blob;
	v->a[72757] = actions(1875);
	v->a[72758] = 3;
	v->a[72759] = sym_raw_string;
	small_parse_table_3638(v);
}

void	small_parse_table_3638(t_small_parse_table_array *v)
{
	v->a[72760] = sym_number;
	v->a[72761] = sym_word;
	v->a[72762] = state(2004);
	v->a[72763] = 5;
	v->a[72764] = sym_arithmetic_expansion;
	v->a[72765] = sym_string;
	v->a[72766] = sym_simple_expansion;
	v->a[72767] = sym_expansion;
	v->a[72768] = sym_command_substitution;
	v->a[72769] = 16;
	v->a[72770] = actions(3);
	v->a[72771] = 1;
	v->a[72772] = sym_comment;
	v->a[72773] = actions(1879);
	v->a[72774] = 1;
	v->a[72775] = anon_sym_LPAREN;
	v->a[72776] = actions(1883);
	v->a[72777] = 1;
	v->a[72778] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72779] = actions(1885);
	small_parse_table_3639(v);
}

void	small_parse_table_3639(t_small_parse_table_array *v)
{
	v->a[72780] = 1;
	v->a[72781] = anon_sym_DOLLAR;
	v->a[72782] = actions(1887);
	v->a[72783] = 1;
	v->a[72784] = anon_sym_DQUOTE;
	v->a[72785] = actions(1889);
	v->a[72786] = 1;
	v->a[72787] = anon_sym_DOLLAR_LBRACE;
	v->a[72788] = actions(1891);
	v->a[72789] = 1;
	v->a[72790] = anon_sym_DOLLAR_LPAREN;
	v->a[72791] = actions(1893);
	v->a[72792] = 1;
	v->a[72793] = anon_sym_BQUOTE;
	v->a[72794] = actions(1895);
	v->a[72795] = 1;
	v->a[72796] = sym_extglob_pattern;
	v->a[72797] = actions(2470);
	v->a[72798] = 1;
	v->a[72799] = anon_sym_esac;
	small_parse_table_3640(v);
}

/* EOF small_parse_table_727.c */
